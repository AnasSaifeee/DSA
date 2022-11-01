#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,32,21,2,3,33,54,11,90,54},i,j,counter=1;
   while(counter<10)
   {
    for(i=0;i<10-counter;i++)
    {
        if(a[i]>a[i+1])
        {
            int temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    counter++;
   }
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}