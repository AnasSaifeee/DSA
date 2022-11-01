#include<iostream>
using namespace std;

int binary_search(int a[],int size,int key)
{
    int start=0;
    int end=size-1;
    int  mid=(start+end)/2;
    while(start<=end)
    {
        if(a[mid]==key)
        {
            return mid;
        }

        if(a[mid]<key)
        {
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    int size=6;
    int key=3;
    int index= binary_search(a,size,key);
    cout<<index;
}