#include<iostream>
using namespace std;
class HotelRoom
{
	private:
	
	public:
	HotelRoom();
	void searchHotels(){
	cout<<"hotel searches"<<endl;
	}
	void viewHotels();
	void bookHotel();
	bool checkAvailability(string room);
	void payment();
};