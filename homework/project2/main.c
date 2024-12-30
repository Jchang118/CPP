#include <stdio.h>
#include <stdlib.h>
// #include "fun.h"
#define N 5

double vec_multi(int n, double *vec1, double *vec2)
{
    double res = 0.0;
    for(int i =0; i < n; i++)
    {
        res += *(vec1+i) * *(vec2+i); 
    }
    return res;
}

int main()
{
    double *vec1 = (double*)malloc(N * sizeof(double));
    double *vec2 = (double*)malloc(N * sizeof(double));
    *vec1 = 3.14;
    *(vec1+1) = 4.68;
    *(vec1+2) = 47.8903;
    *(vec1+3) = 123.833;
    *(vec1+4) = -3213.45;
    *vec2 = -313.451;
    *(vec2+1) = 13233.3213;
    *(vec2+2) = -4213.1451;
    *(vec2+3) = -3.1415926;
    *(vec2+4) = +2323.90023;    
    printf("%f\n", vec_multi(N, vec1, vec2));
    free(vec1);
    free(vec2);
    return 0;
}