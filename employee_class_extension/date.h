/*
* Header file for the date class.
* Includes attributes and methods for a
* date object, to be used to record the date of
* first employment of the employee.
*/

class date{
	
	// Stores the day, month, and year
	private:
		int month;
		int day;
		int year;
		
	public:
	
		// default constructor
		date();
		
		// User-initialized constructor.
		date(int month, int day, int year);
		
		/*
		This method asks the user to type in a date
		and then sets the attributes to that date.
		*/
		void getdate();
		
		// Displays the date to the console.
		void showdate() const;
	
};