#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, k, n = 0;
    for (k = 1; k <= 4; k++)
    {
        for (i = 1; i <= (4 - k); i++)
        {
            cout << " ";
        }
        for (j = 1; j <= k; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}