#include "location.h"
#include <iostream>
using namespace std;

location::location()
{}

location::location(double latitude, char lat_char, double longitude, char lon_char){
	int deg = static_cast<int>(latitude);
	double minutes = latitude - degrees;
	minutes *= 60;
	int min = static_cast<int>(minutes);
	double seconds = minutes - min;
	seconds *= 60;
	int sec = static_cast<int>(seconds);
	this->latitude(deg, min, sec, lat_char);
	
	int deg = static_cast<int>(longitude);
	double minutes = longitude - degrees;
	minutes *= 60;
	int min = static_cast<int>(minutes);
	double seconds = minutes - min;
	seconds *= 60;
	int sec = static_cast<int>(seconds);
	this->longitude(deg, min, sec, lon_char);
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