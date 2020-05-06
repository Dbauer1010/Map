#include "Student.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Student::Student(string name)
{
    this->name = name;
    this->currentRoom = 0;
    this->maxItemCount = 10;
    this->currentItemCount = 0;
    this->backpack = (Item**)malloc(this->maxItemCount * sizeof(Item*));
}

void Student::displayBackpackContents()
{
    for(int i = 0; i < this->currentItemCount; i++)
    {
        cout << this->backpack[i]->getName() << "\n";
    }
}

bool Student::addItem(Item* anItem)
{
    if(this->currentItemCount == this->maxItemCount)
    {
        return false;
    }
    else
    {
        this->backpack[this->currentItemCount] = anItem;
        this->currentItemCount++;
        return true;
    } 
}

string Student::getName()
{
    return this->name;
}

void Student::setCurrentRoom(Room* aRoom)
{
    this->currentRoom = aRoom;
}

Room* Student::getCurrentRoom()
{
    return this->currentRoom;
}

void Student::pickUpItem(Room* cRoom, Item* item)
{
       if(cRoom->getCount() = 0)
       {
               cout << "Nothing in the Room to pick up";
       }
        else
       {
            Student->addItem(item);
       }
}
void Student::dropItem(Room* aRoom, Item* item)
{
    for(int i = 0; i < currentItemCount; ++i)
    {
        aRoom.getItem(backpack[i]);   
    }
}
