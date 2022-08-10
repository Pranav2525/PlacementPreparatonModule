#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int count=0;
    map<pair<int,int>,int>mp;
    for(int i=0;i<start.size();i++)
    {
     mp.insert({{finish[i],start[i]},i+1});
    }
    int end=-1;
    for(auto it:mp)
    {
     if(it.first.second>=end)
     {
      end=it.first.first;
      count++;
     }
    }
    return count;
}