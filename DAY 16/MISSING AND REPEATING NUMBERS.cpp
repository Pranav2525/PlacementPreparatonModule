#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int a,b;
    vector<int>temp(arr.size()+1,0);
    for(int i=0;i<arr.size();i++)
    {
     if(temp[arr[i]]==1)
     {
      a=arr[i];
     }
     temp[arr[i]]=1;
    }
    for(int i=1;i<=arr.size();i++)
    {
     if(temp[i]==0)
     {
      b=i;
     }
    }
    pair<int,int>ans;
    ans.first=b;
    ans.second=a; 
    return ans;
}
