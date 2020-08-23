#pragma once
#include "RoomAction.h"
#include "Room.h"

class CheckOut : public RoomAction {
private:
	Room room;
	string description;
public:
	CheckOut();
	CheckOut(int, string, string, int, Room, string);
	~CheckOut();

	friend ostream& operator<<(ostream&, CheckOut &);
	void RoomActionDisplay(ostream& left);


	Room GetRoom() const;
	string GetDescription() const;

	void SetRoom(Room);
	void SetRoom(string);



};
