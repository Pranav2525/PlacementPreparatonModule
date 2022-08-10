#include<bits/stdc++.h>
bool cmp(pair<int,int>a,pair<int,int>b)
{
 double t1=(double)a.second/(double)a.first;
 double t2=(double)b.second/(double)b.first;
 return t1>t2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),cmp);
    double profit=0;
    for(int i=0;i<n;i++)
    {
     if(w>=items[i].first)
     {
      profit=profit+items[i].second;
      w-=items[i].first;
     }
     else
     {
      profit+=((double)items[i].second/(double)items[i].first)*w;
      break;
     }
    }
    return profit;
}