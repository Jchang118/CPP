#include <iostream>
#include <arm_neon.h>
#include "fun.hpp"

float dotsum(const float *p1, const float *p2, size_t n)
{
	float sum = 0.0f;
	for (size_t i = 0; i < n; i++)
		sum += p1[i] + p2[i];
	return sum;
}

float dotsum_unloop(const float *p1, const float *p2, size_t n)
{
	if(n % 8 != 0)
	{
		std::cerr << "The size n must be a multiplier of 8." << std::endl;
		return 0.0f;
	}
	
	float sum = 0.0f;
	for (size_t i = 0; i < n; i+=8)
	{
		sum += p1[i] + p2[i];
		sum += p1[i+1] + p2[i+1];
		sum += p1[i+2] + p2[i+2];
		sum += p1[i+3] + p2[i+3];
		sum += p1[i+4] + p2[i+4];
		sum += p1[i+5] + p2[i+5];
		sum += p1[i+6] + p2[i+6];
		sum += p1[i+7] + p2[i+7];
	}
	return sum;
}

float dotsum_neon(const float *p1, const float *p2, size_t n)
{
	if(n % 4 != 0)
	{
		std::cerr << "The size n must be a multiplier of 4." << std::endl;
		return 0.0f;
	}

	float sum[4] = {0};
	float32x4_t a, b;
	float32x4_t c = vdupq_n_f32(0);

	for(size_t i = 0; i < n; i+=4)
	{
		a = vld1q_f32(p1 + i);
		b = vld1q_f32(p2 + i);
		c = vaddq_f32(c, vaddq_f32(a, b));
	}
	vst1q_f32(sum, c);
	return (sum[0] + sum[1] + sum[2] + sum[3]);
}

// float dotsum_neon_omp(const float *p1, const float *p2, size_t n)
// {
// 	if(n % 4 != 0)
// 	{
// 		std::cerr << "The size n must be a multiplier of 4." << std::endl;
// 		return 0.0f;
// 	}

// 	float sum[4] = {0};
// 	float32x4_t a, b;
// 	float32x4_t c = vdupq_n_f32(0);

// 	#pragma omp parallel for
// 	for(size_t i = 0; i < n; i+=4)
// 	{
// 		a = vld1q_f32(p1 + i);
// 		b = vld1q_f32(p2 + i);
// 		c = vaddq_f32(c, vaddq_f32(a, b));
// 	}
// 	vst1q_f32(sum, c);
// 	return (sum[0] + sum[1] + sum[2] + sum[3]);
// }


