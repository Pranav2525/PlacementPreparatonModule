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
 help(curr+1,remain,candidates,comb,result);
 comb.push_back(candidates[curr]);
 help(curr,remain-candidates[curr],candidates,comb,result);
}
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>result;
     vector<int>comb;
     help(0,target,candidates,comb,result);
     return result;
    }
};