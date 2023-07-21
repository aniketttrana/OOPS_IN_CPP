// Hybrid inheritance : Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance. 



#include <iostream>
using namespace std;

// Base class A
class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }

    void displayA() {
        cout << "This is class A" << endl;
    }
};

// Base class B
class B {
public:
    B() {
        cout << "Constructor of B" << endl;
    }

    void displayB() {
        cout << "This is class B" << endl;
    }
};

// Derived class C from A and B
class C : public A, public B {
public:
    C() {
        cout << "Constructor of C" << endl;
    }

    void displayC() {
        cout << "This is class C" << endl;
    }
};

// Derived class D from C
class D : public C {
public:
    D() {
        cout << "Constructor of D" << endl;
    }

    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D d;

    cout << "\nCalling methods from class D" << endl;
    d.displayD();
    d.displayC();
    d.displayA();
    d.displayB();
}