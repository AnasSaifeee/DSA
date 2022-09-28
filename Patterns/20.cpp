#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, k, l, n = 0;
    for (k = 1; k <= 4; k++)
    {

        for (j = 0; j < 4 - k; j++)
        {
            cout << " ";
        }
        for (i = 1; i <= k; i++)
        {
            cout << i;
        }
        for (l = 1; l < k; l++)
        {
            cout << k - l;
        }
        cout << endl;
    }
}