#include "FilterGeneric.h"

std::vector<int> FilterGeneric::filter(std::vector<int> a)
{
    // solution 1;
    // std::vector<int> v;

    // if(a.size() == 1)
    // {
    //      if (!g(a[0]))
    //      {
    //         v.push_back(a[0]);
    //      }
    //      return v;
    // }
    // if (!g(a[0]))
    // {
    //     v.push_back(a[0]);
    // }

    // a.erase(a.begin()+0);

    // for(int i = 0; i < filter(a).size(); i++)
    // {
    //     v.push_back(filter(a)[i]);
    // }

    // return v;

    std::vector<int> v;

    if(a.size() > 0)
    {
        if(!g(a[0]))
        {
            v.push_back(a[0]);
        }
        a.erase(a.begin());

        std::vector<int> res = filter(a);

        for(int i = 0; i < res.size(); i++)
        {
            v.push_back(res[i]);
        }
    }
    return v;
}