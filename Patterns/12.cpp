#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, n = 0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            str = 'A' + n;
            n++;
            cout << str;
        }
        cout << endl;
    }
}