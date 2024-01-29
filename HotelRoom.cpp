#include<iostream>
using namespace std;
class HotelRoom
{
	private:
	
	public:

	HotelRoom(){
		cout<<"constructor initializes"<<endl;
	}
	void searchHotels();

	void viewHotels(){
	cout<<"view hotel"<<endl;
	}
	void bookHotel(){
	cout<<"book hotel"<<endl;
	}

	HotelRoom();
	void searchHotels(){
	cout<<"hotel searches"<<endl;
	}
	void viewHotels();
	void bookHotel();

	bool checkAvailability(string room);
	void payment();

	void viewHotels();
	void bookHotel();
	bool checkAvailability(string room){
	cout<<"room check"<<endl;
	}
	void payment(){
	cout<<"payment made"<<endl;
	}

};