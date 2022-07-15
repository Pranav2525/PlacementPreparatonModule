class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     int m=mat.size();
     int n=mat[0].size();
     vector<vector<int>>result(r,vector<int>(c));
     if(m*n!=r*c)
     {
      return mat;
     }
     int a=0,b=0;
     for(int i=0;i<m;i++)
     {
      for(int j=0;j<n;j++)
      {
       result[a][b++]=mat[i][j];
       if(b==c)
       {
        a++;
        b=0;
       }
      }
     }
     return result;
    }
};