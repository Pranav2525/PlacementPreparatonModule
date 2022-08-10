class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
     sort(intervals.begin(),intervals.end());
     vector<vector<int>>result;
     result.clear();
     int maxp=0;
     for(int i=0;i<intervals.size();i++)
     {
      vector<int>temp;
      temp.clear();
      temp.push_back(intervals[i][0]);
      maxp=intervals[i][1];
      while(i+1!=intervals.size()&&maxp>=intervals[i+1][0])
      {
       maxp=max(maxp,intervals[i+1][1]);
       i++;
      }
      temp.push_back(maxp);
      result.push_back(temp);
     }
     return result;
    }
};