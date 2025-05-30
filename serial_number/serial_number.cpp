#include "serial_number.h"
#include <iostream>
using namespace std;

unsigned int serial_number::count = 0;

serial_number::serial_number(){
	count++;
	unsigned int* pcount = &count;
	this->serial_no = *pcount;
}