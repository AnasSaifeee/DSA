#include<iostream>
using namespace std;

class Vehicle
{
   public:
   string brand="Ford";

   void honk()
   {
    cout<<"Car honks";
   }
};

class Car : public Vehicle
{
    public:
    string model="Mustang";
};

int main()
{
     Car c1;
     c1.honk();
     cout<<"Brand : "<<c1.brand<<" Model : "<<c1.model;
}