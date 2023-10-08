// 2.Runtime Polymorphism (also known as Dynamic Polymorphism):
// It can be acheived by function overriding
// Virtual Functions: It is a base class member function that  we can redifine in derived class to acheive polymorphism
// */

// FUNCTION OVERRIDING - The function of base class get a new defination in derived class
// we can use same name function with same parameter  in it.
// by creating the object of basse class and derived class we can access it

// // MAIN DEFINATION

// runtime polymmorphism can be acheived by function overriding and function overriding can be acheived by virtual keyword

// #include <iostream>
// using namespace std;

// // Base class A
// class A
// {
// public:
//     void display()
//     {
//         cout << "This is class A" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void display()
//     {
//         cout << "This is class B" << endl;
//     }
// };

// int main()
// {
//     A obj1;
//     obj1.display();
//     // B obj2;
//     // obj2.display();
// }

// #include <iostream>
// using namespace std;

// class base
// {
// public:
//     void print()
//     {
//         cout << "I am Base class";
//     }
// };
// class derived : public base
// {
// public:
//     void print()
//     {
//         cout << " DERIVED CLASS " << endl;
//     }
// };
// int main()
// {
//     derived obj;
//     // with the help of this obj we can override the function of base class to child
//     obj.print(); // DERIVED CLASS
// }

// MAIN RUNTIME POLYMORPHISM EXAMPLE
#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "I am Base class";
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << " DERIVED CLASS " << endl;
    }
};
int main()
{
    base *b;
    // here we make pointer type object of base class
    derived obj;
    // here we make object of derived class
    b = &obj;
    //  we assign the address of child class to parent obj pointer
    b->print();
    // at last we print the override the function with the help of base class pointer
}
