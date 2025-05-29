#include "angle.h"
#include <iostream>
using namespace std;

angle::angle(): degrees(0), minutes(0), seconds(0)
{}

angle::angle(int deg, int min, int sec, char dir){
	this->degrees = deg;
	this->minutes = min;
	this->seconds = sec;
	this->direction = dir;
}