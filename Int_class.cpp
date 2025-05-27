#include <iostream>
using namespace std;

class Int{
	
	private:
		int value;
	public:
		Int(): value(0)
		{}
		Int(int value){
			this->value = value;
		}
		void display() const{
			cout << this->value << endl;
		}
		void add_Int(Int other){
			this->value += other.value;
		}
};