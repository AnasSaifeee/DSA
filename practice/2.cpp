#include<iostream>
using namespace std;

class salary
{
    private:
    int salary;

    public:
    void setssalary(int x)
    {
        salary=x;
    }

    void getsalary()
    {
        cout<<salary;
    }
};

int main()
{
    salary s1;
    s1.setssalary(50000);
    s1.getsalary();

}