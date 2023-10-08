// Polymorphism
/*
Polymorphism in C++ is a fundamental object-oriented programming concept that allows objects of different classes to be treated as objects of a common base class. The term "polymorphism" comes from Greek words "poly" (meaning many) and "morph" meaning forms.
when member function or object behave in different manner in different circumstances
for example :
mother is a wife to her husband 
mother is a sister to her sister
hence mother is single entity but different behaviour
 There are  2 types of polymorphism
1.Compile-time Polymorphism (also known as Static Polymorphism)

Acheived by function overloading and operator overloading
Function Overloading: This occurs when multiple functions with the same name exist in the same scope, but they have different parameter . function can be called by number of argument passed in calling.

Operator Overloading: C++ allows you to define custom behaviors for operators (+, -, *, /, etc.) when they are used with user-defined classes or types.
or we can redine the functionality of already existing operators.


2.Runtime Polymorphism (also known as Dynamic Polymorphism):
Virtual Functions: This is achieved through the use of virtual functions in C++. When a base class has virtual functions, you can override these functions in derived classes. When you call a virtual function on a pointer or reference to a base class, the actual function called is determined at runtime based on the object's dynamic type.
*/

// ***************COMPILE TIME (STATIC)*************//

// FUNCTION OVERLOADING //
#include <iostream>
using namespace std;

class Add
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
    // float sum(int num1,int num2,num3){
    //     return num1+num2+num3;
    // }
    // As it will not run because the return type must be same. and number of parameter must be different
};
int main()
{

    Add a1;
    cout << a1.sum(1, 2, 3) << endl; // its expecting 3 parameter so it will call 2nd one
    cout << a1.sum(1, 2) << endl;
    // 1st one will come bcoz
    // its expecting 2 parameter
    return 0;
}