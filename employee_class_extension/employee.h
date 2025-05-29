#include "date.h"

class employee{
	
	private:
	
		enum etype{
			NONE = 0,
			labourer = 1,
			secretary = 2,
			manager = 3,
			accountant = 4
		};
	
		int emp_id;
		float comp;
		
		date first_emp;
		etype mytype;
		
	public:
	
		employee();
		
		void getemploy();
		
		void showemploy() const;
		
};