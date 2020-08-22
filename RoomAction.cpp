#include "RoomAction.h"

RoomAction::RoomAction() {
	id = 0;
	customerName = "Unknown";
	customerSurname = "Unknown";
	daysOfstay = 0;
}

RoomAction::RoomAction(int id, string customerName, string customerSurname, int daysOfstay) {
	this->id = id;
	this->customerName = customerName;
	this->customerSurname = customerSurname;
	this->daysOfstay = daysOfstay;
}

RoomAction::~RoomAction(){

}

int RoomAction::GetId() const{
	return id;
}

string RoomAction::GetCustomerName() const{
	return customerName;
}

string RoomAction::GetCustomerSurname() const{
	return customerSurname;
}

int RoomAction::GetDaysOfStay() const
{
	return daysOfstay;
}

void RoomAction::SetId(int id){
	this->id = id;
}

void RoomAction::SetCustomerName(string customerName){
	this->customerName = customerName;
}

void RoomAction::SetCustomerSurnmame(string customerSurname){
	this->customerSurname = customerSurname;
}

void RoomAction::SetDaysOfStay(int daysOfstay){
	this->daysOfstay = daysOfstay;
}
