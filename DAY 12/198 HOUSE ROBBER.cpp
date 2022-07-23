class Solution {
    vector<int>dp;
    int helper(vector<int>nums,int curr)
    {
     if(nums.size()<=curr)
     {
      return 0;
     }
     if(dp[curr]==-1)
     {
      dp[curr]=nums[curr]+helper(nums,curr+2);
     }
     if(curr+1<nums.size())
     {
      if(dp[curr+1]==-1)
      {
       dp[curr+1]=nums[curr+1]+helper(nums,curr+3);
      } 
     }
     int money=max(dp[curr],dp[curr+1]);
     return money;
    }
public:
    int rob(vector<int>& nums) {
     dp.resize(nums.size()+1,-1);
     return helper(nums,0);
    }
};