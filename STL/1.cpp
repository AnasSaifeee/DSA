#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6};
    vector<int>a={3,2,1,4};
     for(auto i=v.begin();i!=v.end();i++)
        {
             for(auto j=i+1;j!=v.end();j++)
            {
                for(auto k=j+1;k!=v.end();k++)
                {
                    if(*i+*j+*k==0)
                    {
                        a.insert(a.end(),{*i,*j,*k});
                    }
                }
            }
        }

        for(auto i:a)
        {
            cout<<i<<endl;
        }
}