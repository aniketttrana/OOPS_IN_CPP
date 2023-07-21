// Hierarchical Inheritance:
// In hierarchical inheritance, a single base class is inherited by multiple derived classes. This means multiple classes are derived from a common base class.

// IT HAS TREE LIKE STRUCTURE

// CLASS B AND C , inherit class A

#include<iostream>
using namespace std;
 class A {   //Base class , Superclass , Parent class

    public:
    A(){
        cout<<"A CONSTRUCTOR "<<endl;
    }
    void totalFunds(int funds){
        cout<<"Total Funds in RBI is "<<funds<<endl;
    }
    string location="H.P";
};


class B :public A{  
    public:
    B(){
        cout<<"B CONSTRUCTOR"<<endl;
    }
    void SBI_branch(){
        cout<<"SBI BRANCH"<<endl;
    }
};
 
class C : public A{  
    public:
   C(){
    cout<<"C CONSTRUCToR"<<endl;
   }
   void PNBbranch(){
        cout<<"PNB BRANCH"<<endl;
    }
};
int main(){
   
C p1;  //all constructors of A and C being called
p1.totalFunds(100);


}