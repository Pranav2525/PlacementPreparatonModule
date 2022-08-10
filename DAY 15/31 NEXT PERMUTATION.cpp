class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int i=nums.size()-1,min=INT_MAX,minindex=i;
     if(i==0)
     {
      return;
     }
     for(;i>0;i--)
     {
      if(nums[i]>nums[i-1])
      {
       for(int j=i;j<nums.size();j++)
       {
        if(nums[j]>nums[i-1]&&nums[j]<min)
        {
         minindex=j;
         min=nums[j];
        }
       }
       swap(nums[minindex],nums[i-1]);
       break;
      }
     }
     sort(nums.begin()+i,nums.end());
    }
};