#include "Room.h"

Room::Room(){
	roomNumber = 0;
	floorNumber = 0;
	description = "Unknown";
	amenities = "Unknown";
	capacity = 0;
	smoking = false;
}
Room::Room(int roomNumber, int floorNumber, string description, string amenities, int capacity, bool smoking) {
	this->roomNumber = roomNumber;
	this->floorNumber = floorNumber;
	this->description = description;
	this->amenities = amenities;
	this->capacity = capacity;
	this->smoking = smoking;
}

Room::~Room(){

}

void Room::RoomDisplay(ostream& left){
	left << "[ Room :" << GetRoomNumber() <<", Floor: " << GetFloorNumber() <<", Description: " << GetDescription() <<
			", Amenities : " << GetAmenities() << ", Capacity : " << GetCapacity() <<((GetSmoking()== true) ? ", Smoking : YES ]" : ", Smoking : NO ]") << endl;
}

int Room::GetRoomNumber() const{
	return roomNumber;
}
int Room::GetFloorNumber() const {
	return floorNumber;
}
string Room::GetDescription() const {
	return description;
}
string Room::GetAmenities() const {
	return amenities;
}
int Room::GetCapacity() const {
	return capacity;
}
bool Room::GetSmoking() const {
	return smoking;
}

void Room::SetRoomNumber(int roomNumber) {
	this -> roomNumber = roomNumber;
}
void Room::SetFloorNumber(int floorNumber){
	this-> floorNumber = floorNumber;
}
void Room::SetDescription(string description){
	this->description = description;
}

void Room::SetAmenities(string amenities){
	this->amenities = amenities;
}

void Room::SetCapacity(int capacity){
	this->capacity = capacity;
}

void Room::SetSmoking(bool smokikng){
	this->smoking = smoking;
}

ostream& operator<<(ostream& left , Room& right){
	right.RoomDisplay(left);
	return left;
}
