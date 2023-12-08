/*ClASS- is a user defined datatype which contains data members/properties and member functions . or we can say it is a blue print of an object . It is a fundamental unit of oop


OBJECT- variable of type class or instance of class
*/



#include <iostream>
using namespace std;
class fruits
{
public:
    string name; // properties
    string color;
};
int main()
{
    fruits apple; // object
                  // from object we can access its properties
    apple.name = "Apple";
    apple.color = "Red";

    cout << apple.name << " --- " << apple.color << endl;

    //  *** OR  *** // using new keyword
    // we are getting pointer variable which is pointing to that object
    // must use arrow operator in this case
    fruits *mango = new fruits();
    mango->name = "Mango";
    mango->color = "Yellow";

    cout << mango->name << " --- " << mango->color << endl;
}