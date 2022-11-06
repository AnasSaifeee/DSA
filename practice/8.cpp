#include <iostream>
using namespace std;
int main()
{
    int n2;
    cin>>n2;
    int prev=0,next=1,term;
    cout<<prev<<" "<<next<<" ";
    for(int i=1;i<=n2;i++)
    {
         term=prev+next;
         prev=next;
         next=term;
         cout<<term<<" ";
    }
}