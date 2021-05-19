#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    int arr[100];

    std::string str;
    std::getline (std::cin,str);
    std::stringstream ss(str);
    for(int i = 0; ss >> i; ) {
        arr[i] = i;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}