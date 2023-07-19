// Constructor and Destructor are the special member functions of the class which are created by the C++ compiler or can be defined by the user. Constructor is used to initialize the object of the class while destructor is called by the compiler when the object is destroyed.

// What is Constructor in C++?
// A constructor is a special member function of a class and shares the same name as of class, which means the constructor and class have the same name. Constructor is called by the compiler whenever the object of the class is created, it allocates the memory to the object and initializes class data members by default values or values passed by the user while creating an object. Constructors don’t have any return type because their work is to just create and initialize an object.
#include<iostream>
using namespace std;

class CAR{  
    public:
   char color[10];
   int speed;

   CAR(){  // COnstructor is being called
    cout<<"CONSTRUCToR"<<endl;
   }

    CAR(int speeds){  // Parameterized constructor
    
        cout<<speeds<<endl;
    }
~CAR(){  // Destructor is being called here
// 2 times 1st for parameterized and then for default
    cout<<"Destructor is called"<<endl;
}


};
int main(){
    
   CAR Harrier1(7);
   CAR Harrier2;
//   When destructor get called then first  DEFAULT one will go out of scope 
// then parameterized

    return 0;
}





