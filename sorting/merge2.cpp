#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid, int r)
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
        b[i]=arr[mid+i+1];
    }

    int i=0,j=0,k=l;

    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++,k++;
        }
        else
        {
            arr[k]=a[j];
            j++,k++;
        }
    }


    while(i<n1)
    { 
         arr[k]=a[i];
        i++,k++;

    }
    while(j<n2)
    {
         arr[k]=a[j];
            j++,k++;
    }
}

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main()
{
    int a[10]={1,32,21,2,3,33,54,11,90,54};
    mergesort(a,0,9);
    for(int i=0;i<10;i++)
    {
         cout<<a[i]<<" ";
    }
}