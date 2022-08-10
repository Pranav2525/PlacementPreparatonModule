class Solution {
void help(int curr,int remain,vector<int>candidates,vector<int>comb,vector<vector<int>>&result)
{
 if(remain==0)
 {
  result.push_back(comb);
  return;
 }
 if(remain<0||curr>=candidates.size())
 {
  return;
 }
 for(int i=curr;i<candidates.size();i++)
 {
  if(i!=curr&&candidates[i]==candidates[i-1])
  {
   continue;
  }
  comb.push_back(candidates[i]);
  help(i+1,remain-candidates[i],candidates,comb,result);
  comb.pop_back();
 }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     vector<vector<int>>result;
     vector<int>comb;
     sort(candidates.begin(),candidates.end());
     help(0,target,candidates,comb,result);
     return result;
    }
};