#include<iostream>
using namespace std;
class XYZ{
    private:
    char ch='A';
    int num=11;
    public:
friend void display(XYZ obj);
};
    void display(XYZ obj){ 

        cout<<obj.ch<<endl;
        cout<<obj.num<<endl;
    }

int main(){
XYZ obj;
display(obj);
return 0;
}