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

int main(){
	
	Int val1;
	Int val2(34);
	Int val3(23);
	
	val1.display();
	val2.display();
	val3.display();
	
	cout << "============" << endl;
	
	val1.add_Int(val2);
	val1.add_int(val3);
	
	val1.display();
	
	return 0;
}