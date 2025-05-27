#include <iostream>
using namespace std;

class time{
	
	private:
		int hours;
		int minutes;
		int seconds;
	
	public:
		time(): hours(0), minutes(0), seconds(0)
		{}
		time(int hr, int min, int sec){
			this->hours = hr;
			this->minutes = min;
			this->seconds = sec;
		}
	
};