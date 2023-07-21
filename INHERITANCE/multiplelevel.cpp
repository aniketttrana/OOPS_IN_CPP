// MULTIPLE : V SHAPE STRUCTURE
//  HAVING MORE THAN 1 BASE CLASS

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


class B {  
    public:
    B(){
        cout<<"B CONSTRUCTOR"<<endl;
    }
    void SBI_branch(){
        cout<<"SBI BRANCH"<<endl;
    }
};
 
class C : public A,B{  
    public:
   C(){
    cout<<"C CONSTRUCToR"<<endl;
   }
   void PNBbranch(){
        cout<<"PNB BRANCH"<<endl;
    }
};
int main(){
   
C p1;  //all constructors is being called
p1.totalFunds(100);


}

