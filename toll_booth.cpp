/*
* Chapter 6 Problem 2
* --------------------
* This problem simulates a toll booth with the tollBooth class.
* Each toll booth counts the number of cars that passed by it and the 
* total amount of toll collected. NOTE: not all cars that pass pay the toll.
*
* Each toll booth starts with 0 cars passed and $0.00 collected. The main
* program uses key presses to count a car that paid, a car that did not pay, and
* to show the toll booth information and exit the program.
*/

#include <iostream>
#include <windows.h> // To detect keypress and use Sleep()
using namespace std;

class tollBooth{
	
	/*
	Stores the number of cars that passed and the
	total amount of toll collected.
	*/
	private:
		unsigned int num_cars;
		double total;
		
	public:
	
		/*
		Initializes a new toll booth.
		*/
		tollBooth(): num_cars(0), total(0.0)
		{}
		
		/*
		A car paid and passed the toll booth.
		Toll is $0.50.
		Increases both number of cars and total.
		*/
		void payingCar(){
			this->num_cars++;
			this->total += 0.50;
		}
		
		/*
		A car passed without paying. Only the 
		number of cars is incremented.
		*/
		void nopayCar(){
			this->num_cars++;
		}
		
		/*
		Displays the information onto the console.
		*/
		void display() const{
			printf("Cars passed = %d\nTotal toll collected = $%.02f", this->num_cars, this->total);
		}
		
};

int main(){
	
	// Initializes test toll booth.
	tollBooth toll_booth;
	
	// Gives user information on how to use the program.
	cout << "Welcome to the toll paying program. Press the 'p' key to count a \n"
			"car that paid the $0.50 cent toll, and the 'n' key to count a car that did not." << endl;
	
	// Constantly checks for key presses.
	while (true){
		
		// Check for a car that paid the toll.
		if (GetAsyncKeyState('P') && 0x8000){
			toll_booth.payingCar();
		}
		
		// Check for a car that did not pay the toll.
		if (GetAsyncKeyState('N') && 0x8000){
			toll_booth.nopayCar();
		}
		
		// Check if user wants to end the program.
		if (GetAsyncKeyState(VK_ESCAPE) && 0x8000){
			toll_booth.display();
			return 0;
		}
		
		// Timer from windows.h to stop over-execution of the loop.
		Sleep(250);
	}
}