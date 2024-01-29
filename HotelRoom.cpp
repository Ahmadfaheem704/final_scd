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
	bool checkAvailability(string room){
	cout<<"room check"<<endl;
	}
	void payment(){
	cout<<"payment made"<<endl;
	}
};