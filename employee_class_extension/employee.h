#include "date.h"

class employee{
	
	private:
	
		static enum etype {NONE, labourer, secretary, manager, accountant};
		
		int emp_id;
		float comp;
		
		date first_emp;
		etype mytype;
		
	public:
	
		employee();
		
		void getemploy();
		
};