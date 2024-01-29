#include<iostream>
using namespace std;
class HotelRoom
{
	private:
	
	public:
	HotelRoom();
	void searchHotels();
	void viewHotels(){
	cout<<"view hotel"<<endl;
	}
	void bookHotel(){
	cout<<"book hotel"<<endl;
	}
	bool checkAvailability(string room);
	void payment();
};