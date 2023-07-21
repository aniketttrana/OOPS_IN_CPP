// 2.Runtime Polymorphism (also known as Dynamic Polymorphism):
// Virtual Functions: This is achieved through the use of virtual functions in C++. When a base class has virtual functions, you can override these functions in derived classes. When you call a virtual function on a pointer or reference to a base class, the actual function called is determined at runtime based on the object's dynamic type.
// */

// FUNCTION OVERRIDING
// #include <iostream>
// using namespace std;

// // Base class A
// class A {
// public:
//     void display() {
//         cout << "This is class A" << endl;
//     }
// };

// class B : public A{
// public:
//     void display() {
//         cout << "This is class B" << endl;
//     }
// };


// int main() {
//   A obj1;
//   obj1.display();
//   B obj2;
//   obj2.display();
// }

#include <iostream>
using namespace std;

class base{
    public:
    void print(){
        cout<<"I am Base class";
    }
    void show(){
         cout<<"I am Base class";
    }
};
class derived : public base {
    public:
    void print(){
        cout<<" am  from Base Class"<<endl;
    }
     void show(){
         cout<<"I am derived class";
    }
};
int main(){

}