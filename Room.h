#pragma once
#include <iostream>
#include <string>

using namespace std;

class Room {
private:
	int roomNumber;
	int floorNumber;
	string description;
	string amenities;
	int capacity;
	bool smoking;
public:
	int GetRoomNumber() const;
	int GetFloorNumber() const;
	string GetDescription() const;
	string GetAmenities() const;
	int GetCapacity() const;
	bool GetSmoking() const;

	void SetRoomNumber(int);
	void SetFloorNumber(int);
	void SetDescription(string);
	void SetAmenities(string);
	void SetCapacity(int);
	void SetSmoking(bool);

	Room();
	Room(int, int, string, string, int, bool);
	~Room();

	friend ostream& operator<<(ostream&, Room&);

	void RoomDisplay(ostream&);

};