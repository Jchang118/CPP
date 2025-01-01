#include <iostream>
using namespace std;

bool vabs(int *p, int n){
	if(p == NULL)
	{
		cout << "NULL Pointer!" << endl;
		return false;
	}
	for(int i = 0; i < n; i++)
		*(p+i) = (*(p+i)) * (*(p+i));
	return true;
}
		
bool vabs(float *p, int n){
	if(p == NULL)
	{
		cout << "NULL Pointer!" << endl;
		return false;
	}
	for(int i = 0; i < n; i++)
		*(p+i) = (*(p+i)) * (*(p+i));
	return true;
}

bool vabs(double *p, int n){
	if(p == NULL)
	{
		cout << "NULL Pointer!" << endl;
		return false;
	}
	for(int i = 0; i < n; i++)
		*(p+i) = (*(p+i)) * (*(p+i));
	return true;
}
