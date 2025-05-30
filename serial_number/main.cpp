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
	
	/*
	Here we have a pointer array my_serial_arr and an
	array my_other_serial_arr.
	The array my_other_serial_arr gets 10 serial_number objects
	already pre-initialized, with serial numbers from 4->14. This is
	because my_serial_arr is an array of pointers that don't have any 
	serial_number objects pointing to them. By the time indices in this array, 
	do point to serial_number objects, they will be 10 more than those of my_other_serial_arr
	since that array (my_other_serial_arr) gets initialized first.
	*/
	serial_number* my_serial_arr[10];
	serial_number my_other_serial_arr[10];
	
	for (int i = 0; i < 10; i++){
		
		/*
		Now we are making each element in my_serial_arr point to 
		a new serial_number object allocated in the stack.
		*/
		my_serial_arr[i] = new serial_number;
		
		/*
		This will result in prints like this:
		I am object number 014.
		I am object number 004.
		as explained in the array initializations comment.
		*/
		my_serial_arr[i]->showSerialNo();
		my_other_serial_arr[i].showSerialNo();
	}
	
	/*
	Over both arrays, 20 serial_number objects were created.
	Therefore, this object will have serial number 24.
	*/
	serial_number sAfterLoop;
	sAfterLoop.showSerialNo();
	
	/*
	For the safety of the program, all pointers are deallocated
	and set to nullptr.
	*/
	for (int i = 0; i < 10; i++){
		delete my_serial_arr[i];
		my_serial_arr[i] = nullptr;
	}
	
	return 0;
	
}