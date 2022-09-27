#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 0;
    for (i = 1; i <= 4; i++)
    {
        n = i;
        for (j = 1; j <= i; j++)
        {

            cout << n;
            n = n - j;
        }
        cout << endl;
    }
}