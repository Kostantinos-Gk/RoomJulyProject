#include "FIFOQueue.h"

FIFOQueue::FIFOQueue(){

}

FIFOQueue::~FIFOQueue(){
	for (list<RoomAction*>::const_iterator it = roomactions.begin(); it != roomactions.end(); ++it)
	{
		delete* it;
	}
	roomactions.clear();
}

void FIFOQueue::insertA(RoomAction *room){
	roomactions.push_back(room);
}

void FIFOQueue::executeB(){
	roomactions.pop_front();
}

void FIFOQueue::FIFOQueueDisplay(){

	list <RoomAction*>::iterator it;
	it = roomactions.begin();
	while (it != roomactions.end()) {
		(*it)->RoomActionDisplay(cout);
		it++;
	}
}
