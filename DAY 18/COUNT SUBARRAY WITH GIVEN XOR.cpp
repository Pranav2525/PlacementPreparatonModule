#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
 unordered_map<int,int>visited;
 int currentxor=0;
 long long count=0;
 for(int i=0;i<arr.size();i++)
 {
  currentxor^=arr[i];
  if(currentxor==x)  
  {
   count++;
  }
  int required=currentxor^x;
  count+=visited[required];
  visited[currentxor]++;
 }
 return count;
}