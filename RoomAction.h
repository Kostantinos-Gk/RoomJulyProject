#pragma once
#include <iostream>
#include <string>

using namespace std;

class RoomAction
{
private:
	int id;
	string customerName;
	string customerSurname;
	int daysOfstay;
public:
	RoomAction();
	RoomAction(int, string, string, int);
	virtual ~RoomAction();

	int GetId() const;
	string GetCustomerName() const;
	string GetCustomerSurname() const;
	int GetDaysOfStay() const;

	virtual void RoomActionDisplay();

};

