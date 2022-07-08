class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     long min=0,max=nums.size()-1,mid;
     while(min<=max)
     {
      mid=(min+max)/2;
      if(nums[mid]>target)
      {
       max=mid-1;
      }
      else if(nums[mid]<target)
      {
       min=mid+1;
      }
      else
      {
       return mid;
      }
     }
     return min;  
    }
};