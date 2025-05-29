#include "angle.h"
#include <iostream>
using namespace std;

int main(){
	
	angle myAngle;
	angle otherAngle(96,21,12,'W');
	
	myAngle.showangle();
	cout << "\n";
	otherAngle.showangle();
	cout << "\n";
	
	cout << "===================" << endl;
	
	myAngle.getangle();
	
	myAngle.showangle();
	cout << "\n";
	otherAngle.showangle();
	cout << "\n";
}