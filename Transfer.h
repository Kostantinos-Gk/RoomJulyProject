#pragma once
#include "RoomAction.h"
#include "Room.h"
class Transfer : public RoomAction {
private:
	Room roomSource;
	Room roomDestination;
	string explanation;
public:
	Transfer();
	Transfer(int ,string, string , int ,Room ,Room , string );
	~Transfer();

	Room GetRoomSource() const;
	Room GetRoomDestination() const;
	string GetExplanation() const;

	void SetRoomSource(Room );
	void SetRoomDestination(Room);
	void SetExplanation(string);

	void RoomActionDisplay(ostream&);
	friend ostream& operator<<(ostream&, Transfer&);
};

