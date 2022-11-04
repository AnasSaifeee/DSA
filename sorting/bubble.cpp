#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,32,21,2,3,33,54,11,90,54},i,j,count=1;
    while(count<10)
    {
        for(i=0;i<10-count;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        count++;
    }
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}