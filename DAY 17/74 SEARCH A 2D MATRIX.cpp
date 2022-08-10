class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int m=matrix.size();
     int n=matrix[0].size();
     int min=0;
     int max=m*n-1;
     int mid;
     while(min<=max)
     {
      mid=(min+max)/2;
      if(matrix[mid/n][mid%n]==target)
      {
       return true;
      }
      else if(matrix[mid/n][mid%n]<=target)
      {
       min=mid+1;
      }
      else 
      {
       max=mid-1;
      }
     }
     return false;
    }
};