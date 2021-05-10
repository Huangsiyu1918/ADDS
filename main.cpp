#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
    std::string str;
    std::vector<int> list;

    std::getline (std::cin,str);


    // int i = 0;
    // while(str[i] != '\n')
    // {
    //     std::string str2 = "";
    //     while(str[i] != ' ' && str[i] != '-')
    //     {   
    //         str2 += str[i++];
    //     }
    //     i++;
    //     int num = std::stoi(str2);
    //     list.push_back(num);
    // }

    std::stringstream ss(str);

    for(int i = 0; ss >> i; ) {
    list.push_back(i);
    }

    QuickSort q;
    q.sort(list);

    RecursiveBinarySearch* B = new RecursiveBinarySearch();
    int k = B->search (list, 1);
    if(k == false)std::cout << "false" << " ";
    else std::cout << "true" << " ";

    
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i] << " ";
    }

    
}
