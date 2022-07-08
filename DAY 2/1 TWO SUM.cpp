class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int,int>mp;
     mp.clear();
     vector<int>result;
     for(int i=0;i<nums.size();i++)
     {
      if(mp[nums[i]]!=0)
      {
       result.push_back(mp[nums[i]]-1);
       result.push_back(i);
       break;
      }
      else
      {
       mp[target-nums[i]]=i+1;
      }
     }
     return result;
    }
};