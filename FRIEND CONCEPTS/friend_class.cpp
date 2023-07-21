#include<iostream>
using namespace std;
class XYZ{
    private:
    char ch='A';
    int num=11;
    public:
friend class ABC;
// ABC became friend of XYZ and now it can access the private members of XYZ
};
class ABC{
    public:
    void display(XYZ obj){ // obj1 , obj2 any namecan aslo work
        // it can;t bcoz they are private
        // in order to access

        cout<<obj.ch<<endl;
        cout<<obj.num<<endl;
    }
};
int main(){
   ABC obj1;
   XYZ obj2;
   obj1.display(obj2);
}