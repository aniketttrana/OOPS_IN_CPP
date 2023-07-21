#include <iostream>
using namespace std;

// Base class A
class A {
public:

void display() {
        cout << "This is class A" << endl;
    }
};

class B {
public:

    void display() {
        cout << "This is class B" << endl;
    }
};


class C : public A, public B{
public:
    // void display() {
    //       cout << "C display" <<endl;
    // }
};

int main() {
  A a1;
  B b1;
  a1.display();
  b1.display();
  C c1;

// It will call its own 
// but if he does n't have display of its own
// then it gets confused to what dispaly() should i pick form A or from B

 c1.A::display();  //call display from A

// :: scope resolution operator


    return 0;
}

// ANOTHER METHOD OF USING SCOPE RESOLUTION

// class C : public A, public B{
// public:
    // void display() {
    //      A::display();
    // }
// };

// C c1;
// c1.display();