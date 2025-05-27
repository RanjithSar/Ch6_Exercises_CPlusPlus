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
		
		void display() const{
			printf("%02d:%02d:%02d\n", this->hours, this->minutes, this->seconds);
		}
		
		void add_two_times(time t1, time t2){
			this->seconds += (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
			this->seconds += (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
			
			while (this->seconds > 60){
				this->minutes++;
				this->seconds -= 60;
			}
			
			while (this->minutes > 60){
				this->hours++;
				this->minutes -= 60;
			}
			
			if (this->hours >= 12){
				this->hours %= 12;
			}
		}
	
};