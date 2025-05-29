class angle{
	
	private:
		int degrees;
		int minutes;
		int seconds;
		char direction;
		
	public:
		angle();
		angle(int deg, int min, int sec, char dir);
		void setangle(int deg, int min, int sec, char dir);
		void showangle() const;
		void getangle();
	
};