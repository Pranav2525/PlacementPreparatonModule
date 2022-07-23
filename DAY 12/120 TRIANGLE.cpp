class Solution {
public:
    vector<vector<int>>dp;
    int helper(vector<vector<int>>& triangle,int i,int j)
    {
     if(i==triangle.size())
     {
      return 0;
     }
     if(dp[i][j]!=-1)
     {
      return dp[i][j];
     }
     int sum1=triangle[i][j]+helper(triangle,i+1,j);
     int sum2=triangle[i][j]+helper(triangle,i+1,j+1);
     return dp[i][j]=min(sum1,sum2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
     dp.resize(triangle.size()+1,vector<int>(200,-1));
     return helper(triangle,0,0);
    }
};