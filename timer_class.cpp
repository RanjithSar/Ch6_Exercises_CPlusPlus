/*
* Chapter 6 Problem 3
* --------------------
* This program simulates a 12-hour time with 
* a time class. By default, it is set to 00:00:00, but
* the user can set the hours, minutes, and seconds as well.
*
* Each time object can be displayed in the 12:59:59 format,
* and two time objects can be added into the current one,
* accounting for rotation of the 12 hours, 60 minutes, and 60
* seconds.
*/

#include <iostream>
using namespace std;

class time{
	
	// Stores the hours, minutes, and seconds.
	private:
		int hours;
		int minutes;
		int seconds;
	
	public:
	
		// Default time constructor.
		time(): hours(0), minutes(0), seconds(0)
		{}
		
		// User-initialized constructor.
		time(int hr, int min, int sec){
			this->hours = hr;
			this->minutes = min;
			this->seconds = sec;
		}
		
		// Prints the time in 12:59:59 format to the console.
		void display() const{
			printf("%02d:%02d:%02d\n", this->hours, this->minutes, this->seconds);
		}
		
		// Adds two time objects together.
		void add_two_times(time t1, time t2){
			
			/*
			Starts with adding the total seconds of t1 into the current object's
			seconds attribute.
			*/
			this->seconds += (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
			
			/*
			Then adds the total seconds of t2 into the current object's
			seconds attribute.
			*/
			this->seconds += (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
			
			/*
			Standardizes the seconds from 0-59, adding any carryover 
			minutes as necessary.
			*/
			while (this->seconds > 60){
				this->minutes++;
				this->seconds -= 60;
			}
			
			/*
			Standardizes the minutes from 0-59, adding any carryover 
			hours as necessary.
			*/
			while (this->minutes > 60){
				this->hours++;
				this->minutes -= 60;
			}
			
			/*
			Standardizes the hours for 12-hour time. Hours are
			from 1-12.
			*/
			if (this->hours >= 12){
				this->hours %= 12;
			}
		}
	
};

int main(){
	
	time t1;
	const time t2(10,12,32);
	const time t3(9,48,30);
	
	t1.display();
	t2.display();
	t3.display();
	
	cout << "================" << endl;
	
	t1.add_two_times(t2, t3);
	
	t1.display();
	
	return 0;
	
}