class Solution {
public:
    vector<vector<int>>dp;
    int pathfinder(int start1,int start2,int end1,int end2)
    {
     int count=0;
     if(start1==end1&&start2==end2)
     {
      count++;
      return count;
     }
     if(start1>end1||start2>end2)
     {
      return 0;
     }
     if(dp[start1+1][start2]!=-1)
     {
      count+=dp[start1+1][start2];
     }
     else
     {
      dp[start1+1][start2]=pathfinder(start1+1,start2,end1,end2);
      count+=dp[start1+1][start2];
     }
     if(dp[start1][start2+1]!=-1)
     {
      count+=dp[start1][start2+1];
     }
     else
     {
      dp[start1][start2+1]=pathfinder(start1,start2+1,end1,end2);
      count+=dp[start1][start2+1];
     }
     return count;
    }
    int uniquePaths(int m, int n) {
     dp.resize(m+1,vector<int>(n+1,-1));
     return pathfinder(0,0,m-1,n-1);
    }
};