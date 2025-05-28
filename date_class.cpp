/*
* Chapter 6 Problem 5
* -------------------
* This program simulates a date in the
* MM/DD/YYYY format with the date class.
* The month, day, and the year are stored as integer
* attributes.
*
* By default, a date is set to 00/00/0000, but the
* user can initialize their own date.
*
* Each date object can change their date values with the 
* getdate function, which asks the user to enter a date in the
* required format.
*
* Each date is displayed in the format with appropriate leading
* zeros.
*/

#include <iostream>
using namespace std;

class date{
	
	// Attributes to store the components of a date.
	private:
		int month;
		int day;
		int year;
		
	public:
	
		// Default date.
		date(): month(0), day(0), year(0)
		{}
		
		// Initialize a date.
		date(int month, int day, int year){
			this->month = month;
			this->day = day;
			this->year = year;
		}
		
		/*
		Asks the user to set a date.
		*/
		void getdate(){
			char bar = '/';
			cout << "Enter a date in MM/DD/YYYY format: " << endl;
			cin >> this->month >> bar >> this->day >> bar >> this->year;
		}
		
		// Shows the date on the terminal.
		void showdate() const{
			printf("%02d/%02d/%04d\n", this->month, this->day, this->year);
		}
	
};

int main(){
	
	// Create uninitialized date.
	date myDate;
	
	// The current date when the program was written.
	date current_date(5,28,2025);
	
	// Show the dates.
	myDate.showdate();
	current_date.showdate();
	
	cout << "===============" << endl;
	
	// Ask the user to set a date for myDate.
	myDate.getdate();
	
	// Show the dates.
	myDate.showdate();
	current_date.showdate();
	
	cout << "===============" << endl;
	
	return 0;
	
}