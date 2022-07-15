class Solution {
public:
    int m,n;
    vector<vector<int>>copy;
    int helper(int i,int j)
    {
     if(i<0 || i>=m || j<0 || j>=n || copy[i][j]==0)
     {
      return 0;
     }
     copy[i][j]=0;
     int c=1;
     c+=helper(i+1,j);
     c+=helper(i-1,j);
     c+=helper(i,j+1);
     c+=helper(i,j-1);
     return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        m=grid.size();
        n=grid[0].size();
        copy=grid;
        for(int i=0;i<m;i++)
        {
         for(int j=0;j<n;j++)
         {
          if(copy[i][j]==1)
          {
           maxarea=max(maxarea,helper(i,j));
          }
         }
        }
        return maxarea;
    }
};