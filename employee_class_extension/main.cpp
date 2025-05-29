/*
* Chapter 6 Exercise 6
* ---------------------
* This program simulates an employee with additional features.
* Each employee now has a date of first employment, represented by
* a date class object, and the position they hold, represented by
* an enum type variable.
*
* All employees are created as default employees. The only way to initialize
* the employee is through the method getemploy().
*
* This program demonstrates the functionality of this employee class
* with three employee objects. First, they are displayed; then, the user is
* asked to initialize each one individually. Finally, the initialized employee
* objects are displayed.
*/

/*
Includes the employee class. 
NOTE: the date class already comes with employee,
so no need to include it explicitly.
*/
#include "employee.h"

#include <iostream>
using namespace std;

int main(){
	
	// The three employee objects.
	employee e1, e2, e3;
	
	// Displays each employee.
	cout << "For employee 1: " << endl;
	e1.showemploy();
	
	cout << "For employee 2: " << endl;
	e2.showemploy();
	
	cout << "For employee 3: " << endl;
	e3.showemploy();
	
	cout << "===============" << endl;
	
	// Asks the user to set each employee individually.
	cout << "For employee 1: " << endl;
	e1.getemploy();
	
	cout << "\nFor employee 2: " << endl;
	e2.getemploy();
	
	cout << "\nFor employee 3: " << endl;
	e3.getemploy();
	
	cout << "===============" << endl;
	
	// Displays the initialized employees.
	cout << "For employee 1: " << endl;
	e1.showemploy();
	
	cout << "For employee 2: " << endl;
	e2.showemploy();
	
	cout << "For employee 3: " << endl;
	e3.showemploy();
	
}