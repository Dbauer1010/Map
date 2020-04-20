#ifndef Node_hpp
#define Node_hpp

class Node  
{
private:
    int payload;
    Node* nextNode; 
    Node* previousNode;
    
public:
    Node(int payload);
    int getPayload();
    Node* getNextNode();
    void setNextNode(Node* n);
    Node* goBack();
    
};
#endif
