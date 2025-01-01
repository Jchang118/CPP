#include <iostream>
#include <string.h>
using namespace std;

template<typename T>
int Compare(const T &a, const T &b)
{
	if(a > b) return 1;
	if(a < b) return -1;
	return 0;
}

struct stuinfo
{
	string name;
	int age;
};


template int Compare<int>(const int &, const int &);
template int Compare<char>(const char &, const char &);
template int Compare<float>(const float &, const float &);
template<> int Compare<stuinfo>(const stuinfo &x, const stuinfo &y)
{
	if(x.age > y.age) return 1;
	if(x.age < y.age) return -1;
	return 0;
}

int main()
{
	int res1 = Compare(3, 4);
	int res2 = Compare(4.1f, 3.1f);
	int res3 = Compare('b', 'a');
	stuinfo a = {"jack", 25};
	stuinfo b = {"mary", 18};
	int res4 = Compare(a, b);
	cout << res1 << " " << res2 << " " << res3 << " " << res4 << endl;
	return 0;
}
