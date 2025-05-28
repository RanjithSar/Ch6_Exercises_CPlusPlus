class date{
	
	private:
		int month;
		int day;
		int year;
		
	public:
		date();
		date(int month, int day, int year);
		
		void getdate();
		void showdate() const;
	
};