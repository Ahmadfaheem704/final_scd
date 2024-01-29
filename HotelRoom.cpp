#include<iostream>
using namespace std;
class HotelRoom
{
	private:
	
	public:
	HotelRoom();
	void searchHotels();
	void viewHotels();
	void bookHotel();
	bool checkAvailability(string room);
	void payment();
};