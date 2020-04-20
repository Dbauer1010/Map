#include "Room.hpp"

Room::Room()
{
    this->head = 0;
    this->count = 0;
}

void Room::display()
{
    for(int i = 0; i < this->count; i++)
    {
        cout << this->get(i) << "\n";
    }
}

string Room::get(int index)
{
    Node* currNode = this->head;
    for(int i = 0; i < index; i++)
    {
        currNode = currNode->getNextNode();
    }
    return currNode->getPayload();
}

