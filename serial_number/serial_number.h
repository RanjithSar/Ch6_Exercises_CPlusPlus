class serial_number{
	
	private:
	
		// Stores the number of all instances created.
		static unsigned int count;
		
		// Stores each individual object's serial number.
		unsigned int serial_no;
		
	public:
	
		// Constructor to initialize each object.
		serial_number();
		
		// To show the object's serial number to the terminal.
		void showSerialNo() const;
	
};