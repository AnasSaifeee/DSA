#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>a,int key)
{
    int s=0,e=a.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>a[mid])
        {
            s=mid+1;
        }
        else if(key<a[mid])
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastOccurrence(vector<int>a,int key)
{
    int s=0,e=a.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>a[mid])
        {
            s=mid+1;
        }
        else if(key<a[mid])
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    vector<int>a={0,0,1,1,1,2,2,3,4};
    int size=9,key=0;
    cout<<"first occurence : "<<firstOccurrence(a,0)<<endl;
    cout<<"last occurrence : "<<lastOccurrence(a,0);
}