#include "date.h"
#include <iostream>
using namespace std;

date::date(): month(0), day(0), year(0)
{}

date::date(int month, int day, int year){
	this->month = month;
	this->day = day;
	this->year = year;
}

void date::getdate(){
	char bar = '/';
	cin >> this->month >> bar >> this->day >> bar >> this->year;
}

void date::showdate() const{
	printf("%02d/%02d/%04d", this->month, this->day, this->year);
}