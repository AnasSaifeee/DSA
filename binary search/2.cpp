#include <iostream>
using namespace std;

int firstOccurrence(int a[],int size,int key)
{
    int s=0,e=size-1;
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
int lastOccurrence(int a[],int size,int key)
{
    int s=0,e=size-1;
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
    int a[6]={1,2,3,3,4,5};
    int size=6,key=3;
    cout<<"first occurence : "<<firstOccurrence(a,6,3)<<endl;
    cout<<"last occurrence : "<<lastOccurrence(a,6,3);
}