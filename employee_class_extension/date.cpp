/*
* Includes the method definitions
* for the date class.
*/

#include "date.h"
#include <iostream>
using namespace std;

// Default constructor
date::date(): month(0), day(0), year(0)
{}

// User defined constructor
date::date(int month, int day, int year){
	this->month = month;
	this->day = day;
	this->year = year;
}

/*
Asks the user for a date.
*/
void date::getdate(){
	
	// For character delimitation
	char bar = '/';
	cin >> this->month >> bar >> this->day >> bar >> this->year;
}

/*
Shows the date onto the console.
This method is constant to avoid accidental 
modification of the attributes.
*/
void date::showdate() const{
	printf("%02d/%02d/%04d", this->month, this->day, this->year);
}