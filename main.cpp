#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int arr[100];
    int command[100];

    std::string str;
    std::getline (std::cin,str);

    bool check = false;
    int n;
    
    string str2 = "";
    string str3 = "";  


    for (int i = 0; i <str.length(); i++)
    {
        if(str[i] == ' ' && str2 != "")
        {
            arr[n++] = stoi(str2);
            str2 = "";
        }
        else
        {
            if(str[i] >=48 && str[i] <= 57)
            {
                str2 += str[i];
            }
            else
            {
                if(str[i] != ' ')
                str3 += str[i];
            }
        }

    }
    arr[n++] = stoi(str2);


    LinkedList* L = new LinkedList(arr, n-2);

    // for ( int i = 0; i <n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // L->printItems();
    // cout << str3 << endl;

    if(str3 == "AF")
    {
        L->addFront(arr[n-2]);
        L->addFront(arr[n-1]);
        L->printItems();
    }
    else if(str3 == "AE")
    {
        L->addEnd(arr[n-2]);
        L->addEnd(arr[n-1]);
         L->printItems();
    }
    else if(str3 == "AP")
    {
        L->addAtPosition(arr[n-2],arr[n-1]);
         L->printItems();
    }   
    else if(str3 == "S")
    {
        L->search(arr[n-2]);
        L->search(arr[n-1]);
         L->printItems();
    }       
    else if(str3 == "DE")
    {
        L->deleteFront();
        L->deleteFront();
         L->printItems();
    }    
    else if(str3 == "DE")
    {
        L->deleteEnd();
        L->deleteEnd();
         L->printItems();
    }   
    
    else if(str3 == "DP")
    {
        L->deletePosition(arr[n-2]);
        L->deletePosition(arr[n-1]);
         L->printItems();
    }
    else if(str3 == "GI")
    {
        L->getItem(arr[n-2]);
        L->getItem(arr[n-1]);
        L->printItems();
    }        
    

    
    
}