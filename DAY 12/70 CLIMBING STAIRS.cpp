class Solution {
public:
     vector<int>dp;
     int helper(int n)
     {
      if(n==0)
      {
       return 1;
      }
      else if(n<0)
      {
       return 0;
      }
      if(dp[n]!=-1)
      {
       return dp[n];
      }
      int count=helper(n-1)+helper(n-2);
      return dp[n]=count;
     }
    int climbStairs(int n) {
     dp.resize(n+1,-1);
     return helper(n);   
    }
};