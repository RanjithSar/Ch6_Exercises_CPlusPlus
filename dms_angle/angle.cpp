#include "angle.h"
#include <iostream>
using namespace std;

angle::angle(): degrees(0), minutes(0), seconds(0)
{
	this->direction = 'X';
}

angle::angle(int deg, int min, int sec, char dir){
	this->degrees = deg;
	this->minutes = min;
	this->seconds = sec;
	this->direction = dir;
}

void angle::showangle() const{
	printf("%02d\xF8%02d\'%02d\" %c", this->degrees, this->minutes, this->seconds, this->direction);
}

void angle::getangle(){
	cout << "Enter an angle in degrees, minutes, and seconds, all whole numbers: ";
	cin >> this->degrees >> this->minutes >> this->seconds;
	cout << "Enter direction N, S, E, or W: ";
	cin >> this->direction;
}