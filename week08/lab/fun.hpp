#pragma once

float dotsum(const float *p1, const float *p2, size_t n);
float dotsum_unloop(const float *p1, const float *p2, size_t n);
float dotsum_neon(const float *p1, const float *p2, size_t n);
float dotsum_neon_omp(const float *p1, const float *p2, size_t n);
