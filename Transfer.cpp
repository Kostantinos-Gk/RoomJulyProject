#include "Transfer.h"

Transfer::Transfer(){
}
Transfer::Transfer(int id, string customerName, string customerSurname, int daysOfstay, Room roomSource, Room roomDestination, string explanation)
	:RoomAction(id,customerName,customerSurname,daysOfstay) {
	
	this->roomSource = roomSource;
	this->roomDestination = roomDestination;
	this->explanation = explanation;
}

Transfer::~Transfer()
{
}

Room Transfer::GetRoomSource() const
{
	return roomSource;
}

Room Transfer::GetRoomDestination() const
{
	return roomDestination;
}

string Transfer::GetExplanation() const
{
	return string(explanation);
}

void Transfer::SetRoomSource(Room roomSource)
{
	this->roomSource = roomSource;
}

void Transfer::SetRoomDestination(Room roomDestination){
	this->roomDestination = roomDestination;
}

void Transfer::SetExplanation(string explanation){
	this->explanation = explanation;
}

void Transfer::RoomActionDisplay(ostream& left){
	left << "Transfer - RoomAction\n---------------" << endl <<
		"Id \t\t: " << GetId() << endl <<
		"Customer Name\t: " << GetCustomerName() << endl <<
		"Customer Surname: " << GetCustomerSurname() << endl <<
		"Days of Stay\t: " << GetDaysOfStay() << endl <<
		"Explanation\t: " << GetExplanation() << endl <<
		"---Room Source Details----\n" << roomSource << endl <<
		"---Room Destination Details----\n" << roomDestination << endl;	
}

ostream& operator<<(ostream& left, Transfer& right) {
	right.RoomActionDisplay(left);
	return left;
}


