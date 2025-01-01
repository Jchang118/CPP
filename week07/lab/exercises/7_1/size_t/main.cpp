#include <stdio.h>
#include "fun.h"

int main()
{
	int arr1[] = {1, -2, 3, -4, 5, -6, 7, -8};
	float arr2[] = {-1.1f, -2.2f, -3.3f, -4.4f, -5.5f, -6.6f, -7.7f, -8.8f};
	double arr3[] = {1.1, -2.2, 3.3, -4.4, 5.5, -6.6, 7.7, -8.8};

	vabs(arr1, 8);
	vabs(arr2, 8);
	vabs(arr3, 8);

	for(int i = 0; i < 8; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for(int i = 0; i < 8; i++)
		printf("%f ", arr2[i]);
	printf("\n");
	
	for(int i = 0; i < 8; i++)
		printf("%lf ", arr3[i]);
	printf("\n");

	return 0;
}
