#include <iostream>
using namespace std;
// Encapsulation: when we dont want to make other class to get our data members directly we use getter and setter and this whole thing we can wrap up as encapsulation

// An act of combining properties and methods, related to same object
// at last these objects can interact with the other various methods
class Employee
{
private:
    int salary;

public:
    // setter
    void setSetter(int x)
    {
        salary = x;
    }
    // getter
    int getData()
    {
        return salary;
    }
};

int main()
{
    Employee obj;
    obj.setSetter(7000);
    cout << obj.getData() << endl;
}