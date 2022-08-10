class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     map<int,int>mp;
     for(int i=0;i<nums.size();i++)
     {
      mp[nums[i]]=1;
     }
     int max=0,current=0,prev=INT_MIN;
     for(auto i:mp)
     {
      if(i.first==prev+1)
      {
       current++;
      }
      else
      {
       current=1;
      }
      if(current>max)
      {
       max=current;
      }
      prev=i.first;
     }
     return max;
    }
};