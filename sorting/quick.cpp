#include<iostream>
using namespace std;

void swap(int a[],int j,int i )
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

int partition(int a[],int l,int r)
{
    int pivot=a[l];
    int i=l,j=r;
    while(i<j)
    {

    while(a[i]<=pivot)
    {
        i++;
    }

    while(a[j]>pivot){
        
        j--;
    
    }
    if(i<j)
    {
        swap(a,i,j);
    }
    }

    swap(a,j,l);
    return j;

    
}

void quicksort(int a[],int l, int r)
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
    int arr[10]={24,43,1,4,32,67,21,99,87,12},l,r;
    quicksort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}