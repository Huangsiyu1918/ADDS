#include "LinkedList.h"
#include "Node.h"
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;
int main()
{


     int arr[100] = { 0 };
    // vector<int> list1;
    // vector<int> list2;

     string s = "";

     std::string str;
     std::getline (std::cin,str);

    // std::stringstream ss(str);

    // int i;
    //   for( i = 0; ss >> i; ) {
    // list1.push_back(i);
    // }
    

    // for (int i = 0; i < list1.size(); i++)
    // {
    //     cout << list1[i] << " ";
    // }


    int k = 0;
    string S = "";
    int j = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == 32){
            S = "";
            j = 0;
        }
            else if(str[i]>= 48 && str[i] <= 57)
            {
                S+=str[i];
                arr[k] = stoi(S);
                k++;
                j++;
            }
            else if(str[i]>= 65 && str[i]<= 90)
            {
                s+=str[i];
        }
        if(j!= 1 && j!= 0)
        {
            arr[k-j] = stoi(S);
            k -=j-1;
        }
    }
    int arr2[2];
    arr2[0] = arr[k];
    arr2[1] = arr[k-1];

   cout << s << endl;

    if(s == "AF")
    {
        LinkedList* L = new LinkedList(arr, k-2);
        L->printItems(); cout << endl;
        L->addFront(arr2[0]);
        L->addFront(arr[1]);
        L->printItems();

    }

    // LinkedList* L = new LinkedList();
    // L->addFront(1);
    // L->addFront(2);
    // L->addFront(3);
    // L->addFront(4);
    // L->addFront(5);
    // L->printItems();
    // cout << endl;


}