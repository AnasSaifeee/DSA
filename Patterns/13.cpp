#include <iostream>
using namespace std;
int main()
{

    char str;
    int i, j, n = 0;
    for (i = 0; i <= 2; i++)
    {
        n = i;
        for (j = 0; j <= 2; j++)
        {
            str = 'A' + n;
            cout << str;
            n++;
        }
        cout << endl;
    }
}