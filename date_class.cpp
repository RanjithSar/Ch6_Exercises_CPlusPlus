#include <iostream>
using namespace std;

class date{
	
	private:
		int month;
		int day;
		int year;
		
	public:
		date(): month(0), day(0), year(0)
		{}
		date(int month, int day, int year){
			this->month = month;
			this->day = day;
			this->year = year;
		}
	
};

int main(){}