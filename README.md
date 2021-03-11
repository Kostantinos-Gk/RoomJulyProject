# RoomJulyProject
<b>C++_Exercise for UNIVERSITY EXAMS</b>


FIFO (First In First Out) Implementation of room management of a hotel. The implementation has been done using lists.

<b>Room Attributes:</b>

Room [number, floor, description, amenities, capacity, smoking(Y/N)]

We have actions as "RoomAction" which support the app, 
<ol>
  <li><b>CheckIN</b> [id, customerName, customerSurName,daysOfStay, Room, description] </li>
  <li><b>CheckOUT</b> [id, customerName, customerSurName,daysOfStay, Room, description] </li>
  <li><b>Tranfer</b> [id, customerName, customerSurName,daysOfStay, RoomSource, RoomDestination,explanation]</li>
</ol>
The app :
<ul>
  <li> Implementation, classes Room, RoomAction, CheckIN, CheckOUT, Transfer</li>
  <li> Implementation, class FIFOQueue which models the list of actions(RoomActions) in the rooms</li>
  <li> Class FIFOQueue has two methods, insertA and excecuteA. With insert method add a new action in the list, with<br>
  executeA delete an action from the list</li>
  <li> Implementation of classes Room, RoomAction, CheckIN, CheckOUT, Transfer</li>
</ul>

