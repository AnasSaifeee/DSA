#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, k, n = 0;
    for (k = 1; k <= 4; k++)
    {

        for (j = 0; j <= 4 - k; j++)
        {
            cout << "*";
        }
        for (i = 0; i <= k; i++)
        {
            cout << " ";
        }
        cout << endl;
    }
}