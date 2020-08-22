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

};

