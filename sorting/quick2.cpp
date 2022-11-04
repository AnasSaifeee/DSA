#include<iostream>
using namespace std;

void swap(int a[],int j,int i)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int l,int r)
{
    int pivot=a[l],i=l,j=r;
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j-- ;
        }
        if(i<j)
        {
            swap(a,i,j);
        }
    }
    swap(a,j,l);
    return j;
}

void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}

int main()
{
     int a[10]={1,32,21,2,3,33,54,11,90,54};
     quicksort(a,0,9);

     for(int i=0;i<9;i++)
     {
        cout<<a[i]<<endl;
     }

}