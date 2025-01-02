#include <iostream>
#include <cstdlib>
#include <chrono>
#include "fun.hpp"
using namespace std;

#define TIME_START start=std::chrono::steady_clock::now();
#define TIME_END(NAME) end=std::chrono::steady_clock::now(); \
			 duration=std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();\
			 cout<<(NAME)<<": result = "<<result \
			 <<", duration = "<<duration<<"ms"<<endl;

int main()
{
	size_t nSize = 200000000;
	float *p1 = new float[nSize]();
	float *p2 = new float[nSize]();
	
	float result = 0.0f;

	p1[2] = 2.3f;
	p2[2] = 3.0f;
	p1[nSize-1] = 2.0f;
	p2[nSize-1] = 1.1f;

	auto start = std::chrono::steady_clock::now();
	auto end = std::chrono::steady_clock::now();
	auto duration = 0L;

	result = dotsum(p1, p2, nSize);
	result = dotsum(p1, p2, nSize);

	TIME_START
	result = dotsum(p1, p2, nSize);
	TIME_END("normal")

	TIME_START
	result = dotsum_unloop(p1, p2, nSize);
	TIME_END("unloop")

	TIME_START
	result = dotsum_neon(p1, p2, nSize);
	TIME_END("SIMD")

	// TIME_START
	// result = dotsum_neon_omp(p1, p2, nSize);
	// TIME_END("SIMD+OpenMP")

	delete []p1;
	delete []p2;

	return 0;
}
