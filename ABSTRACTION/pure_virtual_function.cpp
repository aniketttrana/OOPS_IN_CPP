// Pure virtual function

#include <iostream>
using namespace std;
class base // this is abstraact class . We cant create object of this class
{
public:
    virtual void print() = 0;
    // pure virtual function

    void f2()
    {
        cout << "im f2 function" << endl;
    }
};

class derived : public base
{
public:
    // we do function overriding
    void print()
    {
        cout << " DERIVED CLASS " << endl;
    }
    // Then it will not run , it is necessary to defined it
};

int main()
{
    derived obj;
    // with the help of derived class we can access function now
    obj.print();
    obj.f2();
}