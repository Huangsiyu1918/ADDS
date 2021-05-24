#include "LinkedList.h"
#include "iostream"
#include <limits>

LinkedList::LinkedList()
{
    head = new Node();
}

void LinkedList::addFront(int newItem)
{
    Node* p = new Node();
    p->setData(newItem);
    p->setNode(head);
    head = p;
}

void LinkedList::addEnd(int newItem)
{
    Node* p = new Node();
    p->setData(newItem);
    if(head == nullptr){
        head = p;
        return;
    }
    Node* q = head;

    while(q->getNode() != nullptr)
    {
        q = q->getNode();
    }

    q->setNode(p);
}

void LinkedList::addAtPosition(int position, int newItem)
{
    Node* q = head;
    Node* p = new Node();
    p->setData(newItem);

    if(position <= 1){
        addFront(newItem);
        return;
    }

    for(int i = 0; i < position-2; i++){
        q = q->getNode();
        if(q == nullptr){
            addEnd(newItem);
            return;
        }
    }


    p->setNode(q->getNode());
    q->setNode(p);
}

int LinkedList::search(int item)
{
    Node* q = head;
    int n = 0;

    while(q != nullptr && q->getData() != item)
    {
        q = q->getNode();
        if(q == nullptr){
            std::cout << 0 << " ";
            return 0;
        }
        n++;
    }
    std::cout << n+1 << " ";
    return n+1;
}

void LinkedList::deleteFront()
{
    Node* p = head;
    head = head->getNode();
    delete p;
}

void LinkedList::deleteEnd()
{
    Node* q = head;
    while(q->getNode()->getNode() != nullptr)
    {
        q = q->getNode();
    }

    Node* p = q->getNode();
    q->setNode(nullptr);
    delete(p);
}

void LinkedList::deletePosition(int position)
{
    if(position <= 0){
        std::cout << "outside range" << " ";
        return;
    }else if(position == 1){
        deleteFront();
        return;
    }
    Node* q = head;
    for(int i = 0; i < position-2; i++){
        q = q->getNode();
        if(q->getNode() == nullptr){
            std::cout << "outside range" << " ";
            return;
        }
    }

    Node* p = q->getNode();
    q->setNode(p->getNode());
    delete(p);
}

int LinkedList::getItem(int position)
{
    if (position < 1){
        std::cout << std::numeric_limits < int >::max() << " ";
        return std::numeric_limits < int >::max();
    }

    Node* q = head;
    for(int i = 0; i < position-1; i++){
        q = q->getNode();
        if(q == nullptr){
            std::cout << std::numeric_limits < int >::max() << " ";
            return std::numeric_limits < int >::max();
        }
    }

    std::cout << q->getData() << " ";
    return q->getData();
}

void LinkedList::printItems(){
    Node* q = head;
    while(q != nullptr){
        std::cout << q->getData() << " ";
        q = q->getNode();
    }
    std::cout << std::endl;
}

LinkedList::LinkedList(int arr[], int n)
{
        head = new Node();

    for (int i = 0; i < n; i++)
    {
        addEnd(arr[i]);
    }
    head = head->getNode();
}

LinkedList::~LinkedList()
{
    while(head->getNode() != nullptr)
    {
        Node* p = head->getNode();
        head = head ->getNode();
        delete p;
    }
}
