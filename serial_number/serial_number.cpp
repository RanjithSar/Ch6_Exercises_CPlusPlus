// Include header file.
#include "serial_number.h"

#include <iostream>
using namespace std;

// Initialize the static variable to 0, as there are no objects.
unsigned int serial_number::count = 0;

// Constructor definition
serial_number::serial_number(){
	
	/*
	Increases count by one FIRST and THEN sets the
	serial number to serial_no, as count starts at 0.
	*/
	serial_number::count++;
	
	/*
	To avoid unnecessary copies of the variable count, a unsigned integer
	pointer pcount is created to keep track of the reference of the count
	variable. When this->serial_no needs to be set, this pointer can just be
	dereferenced as *pcount, instead of creating yet another copy of count.
	*/
	unsigned int* pcount = &serial_number::count;
	this->serial_no = *pcount;
}

/*
Shows the object's serial number to the terminal, with necessary leading zeros.
Currently, the limit is 1000 objects with serial numbers from 000 to 999, but
you can change this limit.
*/
void serial_number::showSerialNo() const{
	printf("I am object number %03d.\n", this->serial_no);
}