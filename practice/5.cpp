#include <iostream>
using namespace std;

class Myclass1
{
    private:
    int x;

    public:
       Myclass1(int a)
       {
        x=a;
       }
    
    friend class Myclass2;
};

class Myclass2
{
    public:
    void showdata(Myclass1 obj)
    {
        cout<<obj.x;
    }
};

int main()
{

    Myclass1 obj(5);
    Myclass2 obj2;
    obj2.showdata(obj);

}