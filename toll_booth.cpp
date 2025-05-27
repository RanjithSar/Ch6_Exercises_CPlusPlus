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
			cout << "Cars passed = " << this->num_cars << "\n"
				 << "Total toll collected = " << this->total << endl;
		}
		
};

int main(){
	
	tollBooth toll_booth;
	
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