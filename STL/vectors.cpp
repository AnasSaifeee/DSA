#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={1,2,3,4,5};

    a.erase(a.begin()+1,a.begin()+4);
    for(auto i:a)
    {
        cout<<i<<endl;
    }

}