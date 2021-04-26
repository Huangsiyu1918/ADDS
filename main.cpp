#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "MapTriple.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <string>
#include <iostream>

using namespace std;

void print(vector<int> vec){
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
    cout << endl;
}

int main()
{
    string s; 

    getline(std::cin,s);

    std::vector<int> L;

    string temps = "";
    for (int i = 0; i <= (int)s.length(); i++)
    {
        if(i == (int)s.length() || s[i] == ','){
            L.push_back(stoi(temps));
            temps = "";
        }
        else if(s[i] == ' ') continue;
        else temps+=s[i];
    }

    // L.push_back(-33);
    // L.push_back(-12);
    // L.push_back(7);
    // L.push_back(31);
    // L.push_back(224);
    // L.push_back(2);
    
     MapGeneric* M1 = new(MapAbsoluteValue);
     L = M1->map(L);

     MapGeneric* M2 = new(MapTriple);
     L = M2->map(L);

     FilterGeneric* F1 = new(FilterForTwoDigitPositive);
     L = F1->filter(L);

     FilterGeneric* F2 = new(FilterOdd);
     L = F2->filter(L);

     ReduceGeneric* R1 = new(ReduceMinimum);
     ReduceGeneric* R2 = new(ReduceGCD);

     int Min, GCD;
     Min = R1->reduce(L);
     GCD = R2->reduce(L);

     cout << Min << " " << GCD << endl;




    // for(int i = 0; i < v.size(); i++)
    // {
    //     std::cout << v[i] << " ";
    // }

    // FilterGeneric* F = new(FilterOdd);

    // v = F->filter(v);

    //   for(int i = 0; i < v.size(); i++)
    // {
    //     std::cout << v[i] << " ";
    // }

    // ReduceGeneric* R = new(ReduceMinimum);

    // int i = R->reduce(v);

    // std::cout << i; 
    
    // ReduceGeneric* R = new(ReduceGCD);

    // int i = R->reduce(v);

    // std::cout << i;

    
}