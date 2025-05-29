#include "angle.h"

class location{
	
	private:
		angle latitude;
		angle longitude;
		
	public:
		location();
		location(double latitude, char lat_char, double longitude, char lon_char);
		void getlocation();
		void showlocation() const;
	
};