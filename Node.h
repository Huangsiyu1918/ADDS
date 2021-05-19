#ifndef NODE_H
#define NODE_H

class Node
{
    private:
    int data;
    Node* next;
    public:
    Node();
    int getData();
    Node* getNode();
    void setData(int );
    void setNode(Node*);
};
#endif