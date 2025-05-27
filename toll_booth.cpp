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
#include <windows.h>
using namespace std;

class tollBooth{
	
	private:
		unsigned int num_cars;
		double total;
		
	public:
		tollBooth(): num_cars(0), total(0.0)
		{}
		void payingCar(){
			this->num_cars++;
			this->total += 0.50;
		}
		void nopayCar(){
			this->num_cars++;
		}
		void display() const{
			printf("Cars passed = %d\nTotal toll collected = $%.02f", this->num_cars, this->total);
		}
		
};

int main(){
	
	tollBooth toll_booth;
	
	cout << "Welcome to the toll paying program. Press the 'p' key to count a \n"
			"car that paid the $0.50 cent toll, and the 'n' key to count a car that did not." << endl;
	
	while (true){
		if (GetAsyncKeyState('P') && 0x8000){
			toll_booth.payingCar();
		}
		if (GetAsyncKeyState('N') && 0x8000){
			toll_booth.nopayCar();
		}
		if (GetAsyncKeyState(VK_ESCAPE) && 0x8000){
			toll_booth.display();
			return 0;
		}
		
		Sleep(250);
	}
}