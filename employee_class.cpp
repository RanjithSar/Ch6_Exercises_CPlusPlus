/*
* Chapter 6 Problem 4
* -------------------
* This program simulates an employee with the
* employee class. Each employee gets an ID number and
* a compensation in dollars.
*
* By default, a new employee has ID 0 and compensation 
* $0.00. The user can also initialize an employee.
*
* Each employee has a display method and method set_data 
* that allows modification of the attributes.
*/

#include <iostream>
using namespace std;

class employee{
	
	// Each employee has an ID and a compensation.
	private:
		int emp_num;
		float comp;
		
	public:
	
		// Default constructor.
		employee(): emp_num(0), comp(0.0)
		{}
		
		// User constructor.
		employee(int e_num, float comp){
			this->emp_num = e_num;
			this->comp = comp;
		}
		
		// Shows the employee data to the console.
		void display() const{
			printf("Employee number = %d\n", this->emp_num);
			printf("Employee compensation = %.02f\n", this->comp);
		}
		
		/* 
		Asks the user for a new ID and compensation and
		sets the attributes to those values.
		*/
		void set_data(){
			cout << "Enter new employee id: ";
			cin >> this->emp_num;
			cout << "Enter new compensation: ";
			cin >> this->comp;
		}
};

int main(){
	
	/*
	Three employee objects.
	*/
	employee e1; // Default initialization
	employee e2(12859, 90000.00); // Pre-defined values
	employee e3(e1); // Copies e1 by value
	
	// Displays them before any changes.
	e1.display();
	e2.display();
	e3.display();
	
	cout << "=================" << endl;
	
	// Sets new values for e1.
	e1.set_data();
	
	/*
	Here, e1 will have the new values, while e3 will
	still be 0 and 0.00 since e3 copies e1 by value.
	*/
	e1.display();
	e2.display();
	e3.display();
	
	cout << "=================" << endl;
	
	// Sets new values for e2.
	e2.set_data();
	
	e1.display();
	e2.display();
	e3.display();
	
	cout << "=================" << endl;
	
	// Sets new values for e3.
	e3.set_data();
	
	e1.display();
	e2.display();
	e3.display();

	cout << "=================" << endl;
	
	return 0;
	
}