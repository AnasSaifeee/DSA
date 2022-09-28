#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, n = 0;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= i; j++)
        {
            str = 'A' + 3 - i + j;
            cout << str;
        }
        cout << endl;
    }
}