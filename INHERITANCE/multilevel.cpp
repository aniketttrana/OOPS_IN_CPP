#include<iostream>
using namespace std;
 class BANK {   //Base class , Superclass , Parent class

    public:
    BANK(){
        cout<<"MAIN BANK CONSTRUCTOR "<<endl;
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
        cout<<"SBICONSTRUCTOR"<<endl;
    }
    void SBI_branch(){
        cout<<"SBI BRANCH"<<endl;
    }
};
//  PNB IS child Class, and SBI is its base class
class PNB : public SBI{  
    public:
   PNB(){
    cout<<"PNB CONSTRUCToR"<<endl;
   }
   void PNBbranch(){
        cout<<"PNB BRANCH"<<endl;
    }
};
int main(){
   
PNB p1;  //all constructors is being called
p1.totalFunds(100);


}

