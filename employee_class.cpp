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
	
	private:
		int emp_num;
		float comp;
		
	public:
		employee(): emp_num(0), comp(0.0)
		{}
		employee(int e_num, float comp){
			this->emp_num = e_num;
			this->comp = comp;
		}
		
		void display() const{
			printf("Employee number = %d\n", this->emp_num);
			printf("Employee compensation = %.02f\n", this->comp);
		}
		
		void set_data(){
			cout << "Enter new employee id: ";
			cin >> this->emp_num;
			cout << "Enter new compensation: ";
			cin >> this->comp;
		}
};

int main(){
	
	employee e1;
	employee e2(12859, 90000.00);
	employee e3(e1);
	
	e1.display();
	e2.display();
	e3.display();
	
	cout << "=================" << endl;
	
	e1.set_data();
	
	e1.display();
	e2.display();
	e3.display();
	
	cout << "=================" << endl;
	
	e2.set_data();
	
	e1.display();
	e2.display();
	e3.display();
	
	cout << "=================" << endl;
	
	e3.set_data();
	
	e1.display();
	e2.display();
	e3.display();

	cout << "=================" << endl;
	
	return 0;
	
}