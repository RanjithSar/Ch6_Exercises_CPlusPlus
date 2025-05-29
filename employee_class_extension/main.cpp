#include "employee.h"
#include <iostream>
using namespace std;

int main(){
	
	employee e1, e2, e3;
	
	cout << "For employee 1: " << endl;
	e1.showemploy();
	
	cout << "For employee 2: " << endl;
	e2.showemploy();
	
	cout << "For employee 3: " << endl;
	e3.showemploy();
	
	cout << "===============" << endl;
	
	cout << "For employee 1: " << endl;
	e1.getemploy();
	
	cout << "\nFor employee 2: " << endl;
	e2.getemploy();
	
	cout << "\nFor employee 3: " << endl;
	e3.getemploy();
	
	cout << "===============" << endl;
	
	cout << "For employee 1: " << endl;
	e1.showemploy();
	
	cout << "For employee 2: " << endl;
	e2.showemploy();
	
	cout << "For employee 3: " << endl;
	e3.showemploy();
	
}