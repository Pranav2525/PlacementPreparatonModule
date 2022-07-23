class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
     vector<vector<int>>result;
     vector<int>cp;
     if(nums.size()==1)
     {
      result.push_back(nums);
      return result;
     }
     vector<int>temp=nums;
     result.push_back(nums);
     next_permutation(nums.begin(),nums.end());
     while(temp!=nums)
     {
      result.push_back(nums);
      next_permutation(nums.begin(),nums.end());
     }
     return result;
    }
};