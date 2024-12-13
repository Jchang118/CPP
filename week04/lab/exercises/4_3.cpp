#include <iostream>
using namespace std;

enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum Weather {Sunny, Rainy, Cloudy};

struct DayInfo{
	enum Day day;
	enum Weather weather;
};

bool canTravel(DayInfo dayinfo){
	if ((dayinfo.day == Sunday || dayinfo.day == Saturday) && dayinfo.weather == Sunny)
		return true;
	return false;
}

int main()
{
	DayInfo test = {Sunday, Sunny};

	if (canTravel(test))
		cout << "can travel!" << endl;
	else
		cout << "can not travel!" << endl;

	return 0;
}

