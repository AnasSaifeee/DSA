#include <bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>arr;
     vector<vector<int>>result;
    arr.push_back(2);
    result.push_back(arr);
    arr.push_back(3);
    result.push_back(arr);
   
   for(auto i : result)
   {
      cout<<i;
   }

}