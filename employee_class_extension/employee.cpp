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
	
	int emp_type;
	cout << "Enter number to indicate type of employment.\n" 
		 << "1. Labourer\n2. Secretary\n3. Manager\n4. Accountant" << endl;
	cin >> emp_type;
	
	switch(emp_type){
		case 1:
			this->mytype = labourer;
			break;
		case 2:
			this->mytype = secretary;
			break;
		case 3:
			this->mytype = manager;
			break;
		case 4:
			this->mytype = accountant;
			break;
		default:
			this->mytype = NONE;
	}
}

void employee::showemploy() const{
	cout << "Employee ID number: " << this->emp_id << endl;
	printf("Employee yearly compensation: $%.02f\n", this->comp);
	cout << "Employee date of first employment: ";
	this->first_emp.showdate();
	cout << endl;
	cout << "Employee position: ";
	switch(this->mytype){
		case 1:
			cout << "labourer\n" << endl;
			break;
		case 2:
			cout << "secretary\n" << endl;
			break;
		case 3:
			cout << "manager\n" << endl;
			break;
		case 4:
			cout << "accountant\n" << endl;
			break;
		default:
			cout << "NONE\n" << endl;
	}
}