#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s= "(()())(())";
    string b="";
    // cout<<b.length();
    int i=0;
    while(i<=s.length())
    {
        if(b[b.length()!=s[i]])
        {
            b=b+s[i];
        }
    }
    cout<<b;
}