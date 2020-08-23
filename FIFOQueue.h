#pragma once
#include "RoomAction.h"
#include <list>

class FIFOQueue {
private:
	list <RoomAction *> roomactions;
public:
	FIFOQueue();
	//~FIFOQueue();
	
	void insertA(RoomAction *);
	void executeB();

	//void FIFOQueueDisplay();
	
};

