#include<iostream>
using namespace std;

class Room
{
    public:
        Node(string payload);
        string getPayload(); 
        Node* getNextNode();
        void setNextNode(Node* n);

    private:
        string payload;
        Node* nextNode;

};
