class Solution {
void help(int curr,vector<int>temp,vector<int>nums,vector<vector<int>>&result)
{
 if(curr==nums.size())
 {
  result.push_back(temp);
  return;
 }
 help(curr+1,temp,nums,result);
 temp.push_back(nums[curr]);
 help(curr+1,temp,nums,result);
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>>result;
    vector<vector<int>>finalresult;
    vector<int>temp;
    help(0,temp,nums,result);
    map<vector<int>,int>mp;
    for(int i=0;i<result.size();i++)
    {
     sort(result[i].begin(),result[i].end());
     if(mp[result[i]]==0)
     {
      finalresult.push_back(result[i]);
     }
     mp[result[i]]=1;
    }
    return finalresult;   
    }
};