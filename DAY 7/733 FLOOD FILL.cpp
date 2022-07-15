class Solution {
public:
    vector<vector<int>>result;
    vector<vector<int>>helper;
    int colorgiven;
    int colororiginal;
    void fill(int sr,int sc)
    {
     if(helper[sr][sc]!=0)
     {
      return;
     }
     result[sr][sc]=colorgiven;
     helper[sr][sc]=1;
     if(sr-1>=0&&result[sr-1][sc]==colororiginal)
     {
      fill(sr-1,sc);
     }
     if(sr+1<result.size()&&result[sr+1][sc]==colororiginal)
     {
      fill(sr+1,sc);
     }
     if(sc-1>=0&&result[sr][sc-1]==colororiginal)
     {
      fill(sr,sc-1);
     }
     if(sc+1<result[0].size()&&result[sr][sc+1]==colororiginal)
     {
      fill(sr,sc+1);
     }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     result.clear();
     result=image;
     helper=image;
     for(int i=0;i<image.size();i++)
     {
      for(int j=0;j<image[0].size();j++)
      {
       helper[i][j]=0;
      }
     }
     colorgiven=color;
     colororiginal=image[sr][sc];
     if(colorgiven==colororiginal)
     {
      return result;
     }
     fill(sr,sc);
     return result;
    }
};