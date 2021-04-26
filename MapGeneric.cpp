#include "MapGeneric.h"


std::vector<int> MapGeneric::map(std::vector<int> a)
{
    //solution 1
    // std::vector<int> v;
    // if (a.size() == 1)
    // {
    //     v.push_back(f(a[0]));
    //     return v;
    // }

    // v.push_back(f(a[0]));
    // a.erase(a.begin()+0);
    // for (int i = 0; i < a.size(); i++)
    // {
    //     v.push_back(map(a)[i]);
    // }
    // return v;

    // solution 2

    std::vector<int> v;
    if(a.size() > 0)
    {
        v.push_back(f(a[0]));
        a.erase(a.begin());
        
        std::vector<int> res = map(a);
        for (int i = 0; i < (int)res.size(); i++)
        {
            v.push_back(res[i]);
        }
        
    }
    return v;
}
// num = f(3); num = 9;
// vector v = [1,2,3];
// v = map(v); v = 3, 6, 9;