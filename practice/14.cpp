#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>nums= {1,2,1,3,5,6,4};
   int s=0;
    int e=nums.size()-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
        {
          cout<<mid;
        }
        else if(nums[mid+1]>nums[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
       mid=(s+e)/2;
    }
   


}