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
};

int main(){}