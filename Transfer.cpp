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
	left << "Transfer - RoomAction\n------------------------------------------------------------------------------" << endl <<
		" [ Id: " << GetId() << ", Customer Name: " << GetCustomerName() << ", Customer Surname: " << GetCustomerSurname() << ", Days of Stay: " << GetDaysOfStay() << 
		", Explanation: " << GetExplanation() << " ]\n---Room Source Details----\n" << roomSource << "---Room Destination Details----\n" << roomDestination << endl;	
}

ostream& operator<<(ostream& left, Transfer& right) {
	right.RoomActionDisplay(left);
	return left;
}


