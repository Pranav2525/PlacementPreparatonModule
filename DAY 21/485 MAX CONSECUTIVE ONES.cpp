class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int curr=0,max=0;
     for(int i=0;i<nums.size();i++)
     {
      if(nums[i]==0)
      {
       curr=0;
      }
      else
      {
       curr++;
      }
      if(curr>max)
      {
       max=curr;
      }
     }
     return max;
    }
};