# RoomJulyProject
<b>C++_Exercise for UNIVERSITY EXAMS</b>


FIFO (First In First Out) Implementation of room management of a hotel. The implementation has been done using lists.

<b>Room Attributes:</b>

<b>Room</b> [number, floor, description, amenities, capacity, smoking(Y/N)]

We have actions as "RoomAction" which support the app, 
<ol>
  <li><b>CheckIN</b> [id, customerName, customerSurName,daysOfStay, Room, description] </li>
  <li><b>CheckOUT</b> [id, customerName, customerSurName,daysOfStay, Room, description] </li>
  <li><b>Tranfer</b> [id, customerName, customerSurName,daysOfStay, RoomSource, RoomDestination,explanation]</li>
</ol>
The app :
<ul>
  <li> Implementation, classes Room, RoomAction, CheckIN, CheckOUT, Transfer.</li>
  <li> Implementation, class FIFOQueue which models the list of actions(RoomActions) in the rooms.</li>
  <li> FIFOQueue methods:
    <ul>
      <li>insertA  : add an action in the list</li>
      <li>executeA : delete an action from the list</li> 
      <li>printOut : print an action on screen(console)</li>
      <li>printFile: print an action on .txt file</li>
    </ul>
  <li>In every room action, print the action, on screen and write on file RoomActions.txt </li>
</ul>


