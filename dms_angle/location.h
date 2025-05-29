#include "angle.h"

class location{
	
	private:
		angle latitude;
		angle longitude;
		
	public:
		location();
		location(double latitude, double longitude);
		void getlocation();
		void showlocation() const;
	
};