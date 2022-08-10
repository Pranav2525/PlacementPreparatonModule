class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int major=INT_MIN,count=0;
     for(int i=0;i<nums.size();i++)
     {
      if(major!=nums[i])
      {
       if(count==0)
       {
        major=nums[i];
        count=1;
       }
       else
       {
        count--;
       }
      }
      else
      {
       count++;
      }
     }
     return major;
    }
};