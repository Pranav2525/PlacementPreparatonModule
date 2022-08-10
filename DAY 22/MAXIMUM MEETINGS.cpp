#include<map>
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<int>ans;
    map<pair<int,int>,int>mp;
    for(int i=0;i<start.size();i++)
    {
     mp.insert({{end[i],start[i]},i+1});
    }
    int begin=-1;
    for(auto it:mp)
    {
     if(begin<it.first.second)
     {
      ans.push_back(it.second);
      begin=it.first.first;
     }
     else if(begin==it.first.first&&it.second<ans.back())
     {
      ans.back()=it.second;
     }
    }
    return ans;
}