class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      int i,j,a,b;
      unordered_map<char,int> map;
      for(i=0;i<9;i++)
      {
       for(j=0;j<9;j++)
       {
        if(board[i][j]=='1' || board[i][j]=='2' || board[i][j]=='3' || board[i][j]=='4' || board[i][j]=='5' || board[i][j]=='6' || board[i][j]=='7' || board[i][j]=='8' || board[i][j]=='9')
        {
         if(map[board[i][j]]!=0)
         {
          return false;
         }
         else
         {
          map[board[i][j]]=1;
         }
        }
       }
       map.clear();
      }
      for(j=0;j<9;j++)
      {
       for(i=0;i<9;i++)
       {
        if(board[i][j]=='1' || board[i][j]=='2' || board[i][j]=='3' || board[i][j]=='4' || board[i][j]=='5' || board[i][j]=='6' || board[i][j]=='7' || board[i][j]=='8' || board[i][j]=='9')
        {
         if(map[board[i][j]]!=0)
         {
          return false;
         }
         else
         {
          map[board[i][j]]=1;
         }
        }
       }
       map.clear();
      }
      for(a=1;a<4;a++)
      {
       for(b=1;b<4;b++)
        {
        for(i=(a-1)*3;i<a*3;i++)
        {
         for(j=(b-1)*3;j<b*3;j++)
         {
          if(board[i][j]=='1' || board[i][j]=='2' || board[i][j]=='3' || board[i][j]=='4' || board[i][j]=='5' || board[i][j]=='6' || board[i][j]=='7' || board[i][j]=='8' || board[i][j]=='9')
          {
           if(map[board[i][j]]!=0)
           {
            return false;
           }
           else
           {
            map[board[i][j]]=1;
           }
          }
         }
        }
        map.clear();
       }
      }
      return true;
    }
};