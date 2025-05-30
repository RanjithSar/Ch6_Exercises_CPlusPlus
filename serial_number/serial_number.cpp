#include "serial_number.h"
#include <iostream>
using namespace std;

unsigned int serial_number::count = 0;

serial_number::serial_number(){
	count++;
	unsigned int* pcount = &count;
	this->serial_no = *pcount;
}

void serial_number::showSerialNo() const{
	printf("I am object number %03d.", this->serial_no);
}