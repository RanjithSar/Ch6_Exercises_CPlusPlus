#include <iostream>
using namespace std;

class employee{
	
	private:
		int emp_num;
		float comp;
		
	public:
		employee(): emp_num(0), comp(0.0)
		{}
		employee(int e_num, float comp){
			this->emp_num = e_num;
			this->comp = comp;
		}
		
		void display() const{
			printf("Employee number = %d\n", this->emp_num);
			printf("Employee compensation = %.02f\n", this->comp);
		}
		
		void set_data(){
			cout << "Enter new employee id: ";
			cin >> this->emp_num;
			cout << "Enter new compensation: ";
			cin >> this->comp;
		}
};

int main(){}