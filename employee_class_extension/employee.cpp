#include "employee.h"
#include <iostream>
using namespace std;

employee::employee(){
	this->emp_id = 0;
	this->comp = 0.0;
	this->mytype = NONE;
}

void employee::getemploy(){
	cout << "Enter employee id: " << endl;
	cin >> this->emp_id;
	cout << "Enter compensation: " << endl;
	cin >> this->comp;
	cout << "Enter date of first employment: " << endl;
	this->first_emp.getdate();
	cout << "Enter type of employment: " << endl;
	cin >> this->mytype;
}