#include "Node.h"
#include <iostream>

Node::Node()
{
    data = 0;
    next = nullptr;
}
                //int getData();
                // Node* getNode();
                // void setData(int );
                // void setNode(Node*);


int Node::getData()
{
    return data;
}    

Node* Node::getNode()
{
    return next;
}

void Node::setData(int i)
{
    data = i;
}

void Node::setNode(Node* p)
{
    next = p;
}

