#include "FIFOQueue.h"

FIFOQueue::FIFOQueue(){

}

void FIFOQueue::insertA(RoomAction *room){
	roomactions.push_back(room);
}

void FIFOQueue::executeB(){
	roomactions.pop_front();
}

/*void FIFOQueue::FIFOQueueDisplay(){
	for (int i = 0; i < roomactions.size(); i++)
		cout << roomactions[i] << endl;
}*/
