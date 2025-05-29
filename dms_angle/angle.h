class angle{
	
	private:
		int degrees;
		int minutes;
		int seconds;
		char direction;
		
	public:
		angle();
		angle(int deg, int min, int sec);
		void showangle() const;
		void getangle();
	
};