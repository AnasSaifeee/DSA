#include<iostream>
using namespace std;
int main()
{
     int a[10]={1,32,21,2,3,33,54,11,90,54};
    for(int i=0;i<10;i++)
    {
       int current=a[i];
       int j=i-1;
       while(a[j]>current && j>=0)
       {
        a[j+1]=a[j];
        j--;
       }
       a[j+1]=current;
    }
     for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}