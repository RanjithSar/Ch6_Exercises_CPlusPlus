#include "location.h"
#include <iostream>
using namespace std;

location::location()
{}

location::location(double latitude, char lat_char, double longitude, char lon_char){
	
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