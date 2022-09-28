#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, n = 0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= i; j++)
        {
            str = 'A' + i;
            cout << str;
        }
        cout << endl;
    }
}