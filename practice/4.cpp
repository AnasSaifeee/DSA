#include <iostream>
using namespace std;

class Animal{

    public:
    void sound()
    {
        cout<<"animals say wee wee ";
    }
};

class Dog
{
    public:
    void sound()
    {
        cout<<"dog says wow wow";
    }
};

int main()
{
    Dog d;
    d.sound();
}