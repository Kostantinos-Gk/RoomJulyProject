#pragma once
#include "RoomAction.h"
#include "Room.h"

class CheckIn :  public RoomAction{
private:
	Room room;
	string description;
public:
	CheckIn();
	CheckIn(int, string, string, int, Room, string);
	~CheckIn();

	friend ostream& operator<<(ostream&, CheckIn& );
	void RoomActionDisplay(ostream& left);
	

	Room GetRoom() const;
	string GetDescription() const;

	void SetRoom(Room );
	void SetRoom(string);



};

