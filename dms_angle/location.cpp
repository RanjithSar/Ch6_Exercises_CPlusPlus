#include "location.h"
#include <iostream>
using namespace std;

location::location()
{}

location::location(double latitude, double longitude){
	
	int deg = static_cast<int>(latitude);
	double minutes = latitude - deg;
	minutes *= 60;
	int min = static_cast<int>(minutes);
	double seconds = minutes - min;
	seconds *= 60;
	int sec = static_cast<int>(seconds);
	
	if (latitude >= 0){
		this->latitude.setangle(deg, min, sec, 'N');
	}
	else{
		this->latitude.setangle(deg*-1, min*-1, sec*-1, 'S');
	}
	
	
	deg = static_cast<int>(longitude);
	minutes = longitude - deg;
	minutes *= 60;
	min = static_cast<int>(minutes);
	seconds = minutes - min;
	seconds *= 60;
	sec = static_cast<int>(seconds);
	
	if (longitude >= 0){
		this->longitude.setangle(deg, min, sec, 'E');
	}
	else{
		this->longitude.setangle(deg*-1, min*-1, sec*-1, 'W');
	}
}

void location::getlocation(){
	cout << "Enter the latitude (N or S direction): \n";
	this->latitude.getangle();
	cout << "Enter the longitutde (E or W direction): \n";
	this->longitude.getangle();
}

void location::showlocation() const{
	cout << "latitude: ";
	this->latitude.showangle();
	cout << "\n";
	cout << "longitude: ";
	this->longitude.showangle();
	cout << "\n";
}