#include<bits/stdc++.h>
bool cmp(vector<int>a,vector<int>b)
{
 if(a[1]>=b[1])
 {
  return true;
 }
 return false;
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int profit=0;
    vector<int>temp;
    int maxdead=0;
    for(int i=0;i<jobs.size();i++)
    {
     maxdead=max(maxdead,jobs[i][0]);
    }
    temp.clear();
    temp.resize(maxdead,0);
    sort(jobs.begin(),jobs.end(),cmp);
    for(int i=0;i<jobs.size();i++)
    {
     for(int j=jobs[i][0]-1;j>=0;j--)
     {
      if(temp[j]==0)
      {
       temp[j]=1;
       profit+=jobs[i][1];
       break;
      }
     }
    }
    return profit;
}
