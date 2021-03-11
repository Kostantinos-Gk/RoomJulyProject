# RoomJulyProject
C++_Exercise for UNIVERSITY EXAMS


FIFO (First In First Out) Implementation of room management of a hotel. The implementation has been done using lists.

<b>Room Attributes:</b>

Room [number, floor, description, amenities, capacity, smoking(Y/N)]

We have actions as "RoomAction" which support the app, 

1)CheckIN [id, customerName, customerSurName,daysOfStay, Room, description] <br>
2)CheckOUT [id, customerName, customerSurName,daysOfStay, Room, description] <br>
3)Tranfer [id, customerName, customerSurName,daysOfStay, RoomSource, RoomDestination,explanation]<br>

The app :
<ul>
  <li> Implementation, classes Room, RoomAction, CheckIN, CheckOUT, Transfer</li>
  <li> Implementation, class FIFOQueue which models the list of actions(RoomActions) in the rooms</li>
  <li> Class FIFOQueue has two methods, insertA and excecuteA. With insert method add a new action in the list, with<br>
  executeA delete an action from the list</li>
  <li> Implementation of classes Room, RoomAction, CheckIN, CheckOUT, Transfer</li>
</ul>

