/* In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.

In C++, the class which inherits the members of another class is called derived class and the class whose members are inherited is called base class. The derived class is the specialized class for the base class
*/
// advantages : code reusability

// TYPES 
/*
Single: 1 parent class , 1 child class
Multiple : 
multilevel: chain of inheritance
*/


//  THIS IS SINGLE LEVEL INHERITANCE
#include<iostream>
using namespace std;
 class BANK {   //Base class , Superclass , Parent class

    public:
    BANK(){
        cout<<"MAIN BANK RBI"<<endl;
    }
    void totalFunds(int funds){
        cout<<"Total Funds in RBI is "<<funds<<endl;
    }
    string location="H.P";
};






// here SBI is Subclass or, Derived class , child class
class SBI : public BANK{  // we are inheriting properties of BANK class
    public:
    SBI(){
        cout<<"SBI BANK"<<endl;
    }
};

int main(){
    SBI s1;  
    // we are creating object 
    // of base class s1
    // so it called constructor of parent and child class 
   s1.totalFunds(10737392);  // calling BANK function with the help of base class.

// let access location of SBI 
cout<<"location is "<<s1.location<<endl;


}

