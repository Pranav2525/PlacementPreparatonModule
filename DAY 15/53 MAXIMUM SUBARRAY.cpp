class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int sum=INT_MIN,sum1=0;
     for(int i=0;i<nums.size();i++)
     {
      sum1+=nums[i];
      if(sum1>sum)
      {
       sum=sum1;
      }
      if(sum1<0)
      {
       sum1=0;
      }
     }
     return sum;
    }
};