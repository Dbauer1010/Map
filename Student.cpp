#include Student.hpp

void Student::Move(String direction)
{
       if(direction == "north")
       {
              this->getNextNode();
       }
       else if(direction == "south")
       {
              this->goBack();
       }
}

String Student::Room(String direction)
{
           return this->roomName;   
}
