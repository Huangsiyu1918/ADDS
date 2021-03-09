#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
    int m = 10;
    virtual void func()
    {
        cout << "I am your father" << endl;
    }
    virtual void p()
    {
        cout << "HI" << endl;
    }
};

class B : public A
{
public:
    int n = 1;
    void func()
    {
        cout << "I am your son" << endl;
    }

    void p()
    {
        cout << "Test" << endl;
    }
};

void fk(A *a)
{
    a->func();
}

void test(int a)
{
    cout << a << endl;
}

void test(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    A *a = new B();
    B *b = new B();
    // fk(a);
    // fk(b);
    // a->p();
    // test(1);
    // test(10, 5);
    vector<A *> vec;
    vec.push_back(new A());
    vec.push_back(new B());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]->m<< endl;
    }
    return 0;
}