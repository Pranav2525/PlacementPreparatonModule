class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int>result;
     map<int,int>mp;
     for(int i=0;i<nums.size();i++)
     {
      if(mp[nums[i]]==0)
      {
       mp[target-nums[i]]=i+1;
      }
      else
      {
       result.push_back(mp[nums[i]]-1);
       result.push_back(i);
      }
     }
     return result;
    }
};