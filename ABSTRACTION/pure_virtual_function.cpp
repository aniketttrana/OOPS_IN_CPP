// Pure virtual function

#include <iostream>
using namespace std;
class base
{
public:
    virtual void print() = 0;
};

class derived : public base
{
public:
    void print()
    {
        cout << " DERIVED CLASS " << endl;
    }
    // Then it will not run , it is necessary to defined it
};

int main()
{
    derived obj;
    obj.print();
}