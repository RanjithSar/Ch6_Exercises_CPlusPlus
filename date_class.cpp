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
		
		void getdate(){
			char bar = '/';
			cout << "Enter a date in MM/DD/YYYY format: " << endl;
			cin >> this->month >> bar >> this->day >> bar >> this->year;
		}
		
		void showdate() const{
			printf("%02d/%02d/%04d\n", this->month, this->day, this->year);
		}
	
};

int main(){
	
	date myDate;
	date current_date(5,28,2025);
	
	myDate.showdate();
	current_date.showdate();
	
	cout << "===============" << endl;
	
	myDate.getdate();
	
	myDate.showdate();
	current_date.showdate();
	
	cout << "===============" << endl;
	
	return 0;
	
}