/*
* Includes the employee class template.
* This header file declares all the 
* methods and attributes of the employee class.
*/

/*
Include the date class to store date of first
employment.
*/
#include "date.h"

class employee{
	
	private:
	
		/*
		Static enumeration pre-defining the roles
		an employee can take.
		NOTE: enumerations are static by default.
		*/
		enum etype{
			NONE = 0,
			labourer = 1,
			secretary = 2,
			manager = 3,
			accountant = 4
		};
	
		// For ID and yearly compensation.
		int emp_id;
		float comp;
		
		// Date of first employment
		date first_emp;
		
		/*
		Variable of type mytype enumeration to store
		the employee's position as an integer.
		This integer is mapped to a position in the enumeration.
		*/
		etype mytype;
		
	public:
	
		// Constructor
		employee();
		
		// Asks user to initialize.
		void getemploy();
		
		// Shows employee data to terminal.
		void showemploy() const;
		
};