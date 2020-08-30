#include <iostream>
#include "Room.h"
#include "CheckIn.h"
#include "CheckOut.h"
#include "Transfer.h"
#include "FIFOQueue.h"

using namespace std;

int main() {
	FIFOQueue f;

	Room r1(100,1,"Luxury Room","All-include, Sea-view, Mini bar",3,false);
	Room r2(101, 1, "Luxury Room", "All-include, Mini Bar", 3, false);
	Room r3(102, 1, "Basic Room", "Sea-view, Mini Bar", 3, false);
	Room r4(103, 1, "Basic Room", "Mini Bar, Jacuzi", 3, false);
	Room r5(104, 1, "Suite", "All-include, Sea-view, Mini bar , Private Security", 3, false);
	Room r6(105, 1, "Suite", "All-include, Sea-view, Mini bar , Private Security", 3, false);

	f.insertA(new CheckIn(1000, "Nikos", "Spirou", 14, r1, "Bed and Breakfast"));
	f.insertA(new Transfer(1001, "Hara", "Verra", 14, r1, r4, "Air condition is out of order"));
	f.FIFOQueueDisplay();
	
	//TODO the display of a list and write in text file

	return 0;
}