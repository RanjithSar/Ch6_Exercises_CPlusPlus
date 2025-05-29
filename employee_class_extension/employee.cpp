/*
* This file includes the method definitions
* for the employee class defined in employee.h.
*/

#include "employee.h"
#include <iostream>
using namespace std;

// Default constructor
employee::employee(){
	this->emp_id = 0;
	this->comp = 0.0;
	
	// This sets mytype to the integer 0.
	this->mytype = NONE;
}

// Asks the user to initialize the employee's data.
void employee::getemploy(){
	cout << "Enter employee id: " << endl;
	cin >> this->emp_id;
	cout << "Enter compensation: " << endl;
	cin >> this->comp;
	
	/*
	Since date is not a pre-defined data type, cin cannot be used.
	Instead, the getdate method acts as cin to get and set the date object.
	*/
	cout << "Enter date of first employment: " << endl;
	this->first_emp.getdate();
	
	// Placeholder integer to track selection.
	int emp_type;
	
	// Gets placeholder selection from user.
	cout << "Enter number to indicate type of employment.\n" 
		 << "1. Labourer\n2. Secretary\n3. Manager\n4. Accountant" << endl;
	cin >> emp_type;
	
	/* 
	Loops through all the pre-defined options in the enumeration.
	Any unrecognized integers are set to position NONE.
	*/
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

/*
Displays the employee information to the console.
This method is constant to avoid accidental modification
of attributes.
*/
void employee::showemploy() const{
	cout << "Employee ID number: " << this->emp_id << endl;
	
	// Printf statement to get two decimal places in money amount.
	printf("Employee yearly compensation: $%.02f\n", this->comp);
	
	cout << "Employee date of first employment: ";
	this->first_emp.showdate();
	cout << endl;
	
	/*
	Based on the integer value stored in the enum type
	variable, the switch statement prints out a specific
	position. The numbers and their corresponding positions
	can be found in employee.h.
	*/
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