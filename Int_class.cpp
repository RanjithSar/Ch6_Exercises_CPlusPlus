/*
* Chapter 6 Exercises Problem 1
* -------------------------------
* This program simulates a C++ integer with the
* Int class. The Int can be set to the default of zero, or
* set to a user-defined value. This Int can be displayed,
* and another Int object can be added to it.
*
* The main function showcases the Int class functionality.
* Two Ints are initialized to values other than the default 
* (in this case 34 and 23), and these values are added to the 
* uninitialized Int (the one initialized to the default of zero).
* The results are outputted to the terminal.
*/

#include <iostream>
using namespace std;

// Class definition
class Int{
	
	// Holds the variable that stores the value for the Int
	private:
		int value;
		
	public:
	
		/* Default value constructor */
		Int(): value(0)
		{}
		
		/* Constructor to manually initialize Int value. */
		Int(int value){
			this->value = value;
		}
		
		/*
		Function to display the Int's value to the console.
		This function is constant so the value is not
		accidentally modified.
		*/
		void display() const{
			cout << this->value << endl;
		}
		
		// Adds another Int object to the current one.
		void add_Int(Int other){
			this->value += other.value;
		}
};

int main(){
	
	Int val1;
	Int val2(34);
	Int val3(23);
	
	val1.display();
	val2.display();
	val3.display();
	
	cout << "============" << endl;
	
	val1.add_Int(val2);
	val1.add_Int(val3);
	
	val1.display();
	
	return 0;
}