#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            str = 'A' + j;
            cout << str;
        }
        cout << endl;
    }
}