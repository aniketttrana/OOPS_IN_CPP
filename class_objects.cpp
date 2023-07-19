#include<iostream>
using namespace std;
/*
Class : Blueprint for creating object means it 
 is a user-defined type that describes what a certain type of object will look like. A class description consists of a declaration and a definition


Object: Instance of a class. You can create many objects from the same class type.

*/
class CAR{  
    public:
   char color[10];
   int speed;

 void getData(int distance , int fuel){
    cout<<"Covered"<<distance<<endl<<"consumed"<<fuel<<endl;
 }


 void mileage(float distance , float fuel);

 void getSpeed(){
    cout<<" Speed is" <<speed<<endl;
 }

// };
}audi; // we can make another object like audi here also
// in between closing tag and  semicolon



void CAR :: mileage(float d , float f){ // we can define same name also like distance and fuel
float carMileage = d/f;
cout<<carMileage<<endl;
}



int main(){
   CAR Harrier;
   Harrier.getData(23,3);
   audi.mileage(22,33);

   audi.speed=10;
//    cout<<speed<<endl;  WE CANT DO THAT
   audi.getSpeed();
    return 0;
}