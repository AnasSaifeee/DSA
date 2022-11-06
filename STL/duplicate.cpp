#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={};
    int val=0;
    for(int i=0;i<a.size()-1;i++)
    { 
        
        
            if(a[i]==val)
            {
                a.erase(a.begin()+i);
                i=0;
            }
        
    }
   
   for(int i=0;i<a.size()-1;i++)
   {
    cout<<a[i]<<endl;
   }
}