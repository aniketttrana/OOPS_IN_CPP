// Operator Overloading: C++ allows you to define custom behaviors for operators (+, -, *, /, etc.) when they are used with user-defined classes or types

// In this we can use operator as a function name
#include <iostream>
using namespace std;

class ADD
{
    int x;

public:
    ADD()
    {
        x = 10;
    }
    void operator++()
    {
        x += 5;
    }
    int print()
    {
        cout << x;
    }
};
int main()
{
    ADD obj1;
    ++obj1;
    // obj1 of ++ is sharing its function
    int res = obj1.print();
    return 0;
}