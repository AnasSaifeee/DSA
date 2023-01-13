#include <bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>nums={-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,-336,513,-560,-481,-174,101,-997,40,-527,-784,-283,354};
     sort(nums.begin(),nums.end());
     if(nums.size()==1)
        {
            cout<<nums[0];
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
        {
            cout<<nums[nums.size()-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[i+1])
            {
                cout<<nums[i];
            }
        }
}