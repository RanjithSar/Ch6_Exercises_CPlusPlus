/*
* Chapter 6 Problem 8
* --------------------
* This problem simulates a serial number based on 
* the number of objects of that class. Each time an object
* is created, the count is incremented by one, and the most
* recent object's serial number is the value of that count.
*
* This main method demonstrates this functionality with individual
* serial_number objects, an array of serial_number objects, and a 
* pointer array of serial_number objects.
*/

// Include the serial_number class
#include "serial_number.h"

#include <iostream>
using namespace std;

int main(){
	
	/*
	Creates three serial_number objects.
	The static variable count starts at 0.
	After s1, it's 1, so s1's serial number is 1.
	After s2, it's 2, so s2's serial number is 2.
	The same logic applies for s3 and so on.
	*/
	serial_number s1, s2, s3;
	
	// Display the serial numbers.
	s1.showSerialNo();
	s2.showSerialNo();
	s3.showSerialNo();
	
	serial_number* my_serial_arr[10];
	serial_number my_other_serial_arr[10];
	
	for (int i = 0; i < 10; i++){
		my_serial_arr[i] = new serial_number;
		my_serial_arr[i]->showSerialNo();
		my_other_serial_arr[i].showSerialNo();
	}
	
	serial_number sAfterLoop;
	sAfterLoop.showSerialNo();
	
	for (int i = 0; i < 10; i++){
		delete my_serial_arr[i];
		my_serial_arr[i] = nullptr;
	}
	
	//delete[] my_serial_arr;
	
	return 0;
	
}