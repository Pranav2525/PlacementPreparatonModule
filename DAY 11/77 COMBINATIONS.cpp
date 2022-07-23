class Solution {
    private:
    void combinations(int ind,int n,int k,vector<int>&ds,vector<vector<int>> &ans)
    {
     if(k==0)
     {
      ans.push_back(ds);
      return;
     }
     for(int i=ind;i<=n;i++)
     {
      ds.push_back(i);
      combinations(i+1,n,k-1,ds,ans);
      ds.pop_back();
     }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        combinations(1,n,k,ds,ans);
        return ans;
    }
};