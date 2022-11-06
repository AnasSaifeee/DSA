#include <bits/stdc++.h>
using namespace std;

int firstocc(vector<int>a,int key)
{
    int s=0,e=a.size()-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e)
    {
        if(a[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }

        if(key>a[mid])
        {
            s=mid+1;
        }
        if(key<a[mid])
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }



}
int lastocc(vector<int>a,int key)
{
    int s=0,e=a.size()-1;
    int mid=(s+e)/2;
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
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    int count=0;

    for(int i=0;i<nums.size()-1;i++)
    {
       for(int j=i+1;j<nums.size();j++)
       {

          if(nums[i]==nums[j])
          {
              int key=nums[i];
              int size= nums.size();
               
              int first = firstocc(nums,key);
              int last = lastocc(nums,key);
              nums.erase(nums.begin()+first+1,nums.begin()+last+1);
            
          }
       }
    }
   cout<<nums.size();
   
}