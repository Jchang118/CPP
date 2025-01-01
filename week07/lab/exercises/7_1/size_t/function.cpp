#include <iostream>
#include <cmath>
using namespace std;

bool vabs(int *p, size_t n){
	if(p == NULL)
	{
		cout << "NULL Pointer!" << endl;
		return false;
	}
	for(int i = 0; i < n; i++)
		*(p+i) = abs(*(p+i));
	return true;
}
		
bool vabs(float *p, size_t n){
	if(p == NULL)
	{
		cout << "NULL Pointer!" << endl;
		return false;
	}
	for(int i = 0; i < n; i++)
		*(p+i) = abs(*(p+i));
	return true;
}

bool vabs(double *p, size_t n){
	if(p == NULL)
	{
		cout << "NULL Pointer!" << endl;
		return false;
	}
	for(int i = 0; i < n; i++)
		*(p+i) = abs(*(p+i));
	return true;
}
