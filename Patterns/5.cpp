#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            n = n + 1;
            cout << n;
        }
        cout << endl;
    }
}