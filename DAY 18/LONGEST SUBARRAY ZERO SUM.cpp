#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int sum=0;
  int maxsub=0;
  map<int,int>mp;
  for(int i=0;i<arr.size();i++)
  {
   sum+=arr[i];
   if(sum==0)
   {
    maxsub=i+1;
   }
   else
   {
    if(mp[sum]!=0)
    {
     maxsub=max(maxsub,i-mp[sum]+1);
    }
    else
    {
     mp[sum]=i+1;
    }
   }
  }
  return maxsub;
}