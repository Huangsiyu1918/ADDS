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
    p->setNode(head->getNode());
    head->setNode(p);
}

void LinkedList::addEnd(int newItem)
{
    Node* q = head;
    Node* p = new Node();
    p->setData(newItem);

    while(q->getNode() != 0)
    {
        q = q->getNode();
    }

    p->setNode(q->getNode());
    q->setNode(p);
}

void LinkedList::addAtPosition(int position, int newItem)
{
    Node* q = head;
    Node* h = head;
    Node* p = new Node();
    p->setData(newItem);

    int length = 0;
    while(q != nullptr)
    {
        q = q->getNode();
        length++;
    }

    if (position > length) addEnd(newItem);
    else if(position < 1) addFront(newItem);
    else
    {
        int n = 0;
        while (n+1 != position)
        {
            h = h->getNode();
            n++;
        }
        p->setNode(h->getNode());
        h->setNode(p);
    }
}

int LinkedList::search(int item)
{
     Node* q = head;
     int n = 0;

     while(q->getNode() != nullptr)
     {
         n++;
         if (q->getData() == item)
         {
             std::cout << n << " ";
             return n;
         }
     }
     std:: cout << 0 << " ";
     return 0;

}

void LinkedList::deleteFront()
{
    Node* p = head->getNode();
    Node* q = head->getNode();
    head->setNode(q->getNode());
    delete p;
}

void LinkedList::deleteEnd()
{
    Node* q = head;
    Node* p = q;
    while(q->getNode() != nullptr)
    {
        p = q;
        q = q->getNode();
    }

    p->setNode(0);
    delete q;






}

void LinkedList::deletePosition(int position)
{
     Node* q = head;
     Node* p = head;
    int length = -1;
    while(q!= nullptr)
    {
        q = q->getNode();
        length++;
    }

    if (position > length)
    { 
        std::cout << "outside range";
    }
    else if (position < 1)
    {
         std::cout << "outside range";
    }
    else if (position == 0) 
    {
        return;
    }
    else
    {
        int n = 1;
        while(n != position)
        {
            p = p->getNode();
            n++;
        }

        Node* h = p->getNode();
        p->setNode(h->getNode());
        delete h;
    }
}

int LinkedList::getItem(int position)
{
    Node* q = head;
    Node* p = head;
    int length = -1;
    while(q != nullptr)
    {
        q = q->getNode();
        length++;
    }

    if (position > length) 
    {std::cout << std::numeric_limits < int >::max() << " ";
    return std::numeric_limits < int >::max();}

    else if (position < 1){
    std::cout << std::numeric_limits < int >::max() << " ";
    return std::numeric_limits < int >::max();}
    else if (position == 0)
    {
        return 0;
    }
    else
    {
        int n = 0;
        while(n != position)
        {
            p = p->getNode();
            n++;
        }
        std::cout << p->getData() << " ";
        return p->getData();
    }
}

void LinkedList::printItems()
{
    Node* p = head->getNode();
    if (head->getNode() == 0) return;

    while(p != nullptr)
    {
        std:: cout << p->getData() << " ";
        p = p->getNode();
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
