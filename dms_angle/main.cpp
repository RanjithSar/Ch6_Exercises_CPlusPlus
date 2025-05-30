#include "location.h"
#include <iostream>
using namespace std;

int main(){
	
	location myLocation;
	location friendLocation(38.271790, -106.731178);
	
	myLocation.showlocation();
	friendLocation.showlocation();
	
	cout << "=============" << endl;
	
	myLocation.getlocation();
	
	cout << "=============" << endl;
	
	myLocation.showlocation();
	
	return 0;
	
}