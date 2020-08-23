#include "CheckIn.h"

CheckIn::CheckIn():RoomAction(){

}

CheckIn::CheckIn(int id, string customerName, string customerSurname, int daysOfstay, Room room, string description) : RoomAction(id,customerName,customerSurname,daysOfstay){
	this->room = room;
	this->description = description;
}

CheckIn::~CheckIn(){

}

Room CheckIn::GetRoom() const
{
	return room;
}

string CheckIn::GetDescription() const
{
	return description;
}

void CheckIn::SetRoom(Room room){
	this-> room = room;
}

void CheckIn::SetRoom(string description){
	this->description = description;
}

void CheckIn::RoomActionDisplay(ostream& left){
	left << "CheckIn - RoomAction\n---------------" << endl <<
		"Id \t\t: " << GetId() << endl <<
		"Customer Name\t: " << GetCustomerName() << endl <<
		"Customer Surname: " << GetCustomerSurname() << endl <<
		"Days of Stay\t: " << GetDaysOfStay() << endl <<
		"Description\t: " << GetDescription() << endl << "---Room Details----\n" << room;
}

ostream& operator<<(ostream& left, CheckIn& right){
	right.RoomActionDisplay(left);
	return left;
}
