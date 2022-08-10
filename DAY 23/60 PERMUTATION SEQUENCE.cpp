class Solution {
public:
    string getPermutation(int n, int k) {
     string anss="";
     for(int i=1;i<=n;i++)
     {
      anss=anss+to_string(i);
     }
     k--;
     while(k--)
     {
      next_permutation(anss.begin(),anss.end());
     }
     return anss;
    }
};