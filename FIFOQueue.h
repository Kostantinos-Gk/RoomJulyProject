#pragma once
#include "RoomAction.h"
#include <fstream>
#include <list>

using namespace std;

class FIFOQueue {
private:
	list <RoomAction *> roomactions;
public:
	FIFOQueue();
	~FIFOQueue();
	
	void insertA(RoomAction *);
	void executeB();

	void FIFOQueueDisplay(ofstream &);
	
	void printOut(RoomAction *);
	void printFile(RoomAction *,ofstream &);
};

