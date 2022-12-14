#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
      int n1=mid-l+1;
      int n2=r-mid; 
      int a[n1],b[n2];
      for(int i=0;i<n1;i++)
      {
           a[i]=arr[l+i];
      }
      for(int i=0;i<n2;i++)
      {
        b[i]=arr[mid+1+i];
      }
      int i=0;
      int j=0;
      int k=l;

      while(i<n1&&j<n2)
      {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++; i++;
        }
        else
        {
            arr[k]=b[j];
            k++,j++;
        }
      }

      while(i<n1)
      {
             arr[k]=a[i];
            k++; i++;
      }
      while(j<n2)
      {
             arr[k]=b[j];
            k++; j++;
      }
}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge( a,l,mid,r);
    }
}

int main()
{
    int a[10]={11,3,9,2,7,6,8,5,4,12},l,r;
    mergesort(a,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    
}