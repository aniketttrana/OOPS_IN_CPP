#include <iostream>
// Abstraction: Hiding the things and show only valuable things to end users
// we create a abstract layer
// we must have a abstract class i.e formm using virutal keyword
using namespace std;
class Smartphone
{
public:
    virtual void Takeselfie() = 0;
    virtual void MakeCall() = 0;
};

class Android : public Smartphone
{
public:
    void Takeselfie()
    {
        cout << "Selfie Taken" << endl;
    }
    void MakeCall()
    {
        cout << "call Make" << endl;
    }
};

class Iphone : public Smartphone
{
public:
    void Takeselfie()
    {
        cout << "Iphone Selfie Taken" << endl;
    }
    void MakeCall()
    {
        cout << "CALl iphone" << endl;
    }
};

int main()
{
    Smartphone *s1 = new Android();
    s1->Takeselfie();
    s1->MakeCall();

    Smartphone *s2 = new Iphone();
    s2->Takeselfie();
}