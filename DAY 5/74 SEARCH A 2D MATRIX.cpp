class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int left,right,m,n,mid,midindex;
     m=matrix.size();
     n=matrix[0].size();
     left=0;
     right=m*n-1;
     while(left<=right)
     {
      midindex=(left+right)/2;
      mid=matrix[midindex/n][midindex%n];
      if(mid==target)
      {
       return true;
      }
      if(mid<target)
      {
       left=midindex+1;
      }
      else
      {
       right=midindex-1;
      }
     }
     return false;
    }
};