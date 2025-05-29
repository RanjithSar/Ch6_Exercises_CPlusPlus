#include "location.h"
#include <iostream>
using namespace std;

int main(){
	
	location myLocation;
	
	myLocation.showlocation();
	
	cout << "=============" << endl;
	
	myLocation.getlocation();
	
	cout << "=============" << endl;
	
	myLocation.showlocation();
	
	return 0;
	
}