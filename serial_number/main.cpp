#include "serial_number.h"
#include <iostream>
using namespace std;

int main(){
	
	serial_number s1, s2, s3;
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