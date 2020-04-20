#include "LinkedList.hpp"
#include "Student.hpp"
#include "Room.hpp"
#include <iostream>
#include <ctime>

int main()
{
    LinkedList* room = new LinkedList();

    for(int i = 0; i < 15; i++)
    {
        ll->addEnd(std::rand() % 1000);
    }
    ll->display(); 
    
}
