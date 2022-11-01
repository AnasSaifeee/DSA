#include<iostream>
using namespace std;
int main()
{
    int a[10]={11,3,9,2,7,6,8,5,4,12},i,j;
  
   for(i=0;i<10-1;i++)
   {
    for(j=i+1;j<10;j++)
    {
          if(a[i]>a[j])
          {
            int temp =a[i];
            a[i]=a[j];
            a[j]=temp;
          }
    }
   }
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
}