// Constructor and Destructor are the special member functions of the class which are created by the C++ compiler or can be defined by the user. Constructor is used to initialize the object of the class while destructor is called by the compiler when the object is destroyed.

// What is Constructor in C++?
// A constructor is a special member function of a class and shares the same name as of class, which means the constructor and class have the same name. Constructor is called by the compiler whenever the object of the class is created, it allocates the memory to the object and initializes class data members by default values or values passed by the user while creating an object. Constructors don’t have any return type because their work is to just create and initialize an object.
// cant pass any parameter in it
#include <iostream>
using namespace std;
// 3 types - default,copy,parameterized
class Rectangle
{
public:
    int l;
    int b;
    Rectangle()
    { // default constructors
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y)
    { // Parameterized
        l = x;
        b = y;
    }
    Rectangle(Rectangle &r) // copy
    {
        l = r.l;
        b = r.b;
    }
    ~Rectangle()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{

    Rectangle *obj0 = new Rectangle();
    cout << obj0->l << " - " << obj0->b << endl;
    delete obj0;
    Rectangle obj1;
    // cout<<obj1.l;
    cout << obj1.l << " - " << obj1.b << endl;

    Rectangle obj2(2, 3);
    cout << obj2.l << " - " << obj2.b << endl;

    Rectangle obj3 = obj2; // obj2 values will go to obj3
    cout << obj3.l << " - " << obj3.b << endl;
}
