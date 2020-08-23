#include "CheckOut.h"

CheckOut::CheckOut() :RoomAction() {

}

CheckOut::CheckOut(int id, string customerName, string customerSurname, int daysOfstay, Room room, string description) : RoomAction(id, customerName, customerSurname, daysOfstay) {
	this->room = room;
	this->description = description;
}

CheckOut::~CheckOut() {

}

Room CheckOut::GetRoom() const
{
	return room;
}

string CheckOut::GetDescription() const
{
	return description;
}

void CheckOut::SetRoom(Room room) {
	this->room = room;
}

void CheckOut::SetRoom(string description) {
	this->description = description;
}

void CheckOut::RoomActionDisplay(ostream& left) {
	left << "CheckOut - RoomAction\n---------------" << endl <<
		"Id \t\t: " << GetId() << endl <<
		"Customer Name\t: " << GetCustomerName() << endl <<
		"Customer Surname: " << GetCustomerSurname() << endl <<
		"Days of Stay\t: " << GetDaysOfStay() << endl <<
		"Description\t: " << GetDescription() << endl << "---Room Details----\n" << room;
}

ostream& operator<<(ostream& left, CheckOut& right) {
	right.RoomActionDisplay(left);
	return left;
}

