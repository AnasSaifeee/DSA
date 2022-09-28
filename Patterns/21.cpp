#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, k, l, m, n = 5;
    for (k = 1; k <= 5; k++)
    {
        for (i = 1; i <= n; i++)
        {
            cout << i;
        }
        for (j = 1; j < k; j++)
        {
            cout << "*";
        }
        for (m = 1; m < k; m++)
        {
            cout << "*";
        }
        for (l = n; l >= 1; l--)
        {
            cout << l;
        }

        n--;
        cout << endl;
    }
}