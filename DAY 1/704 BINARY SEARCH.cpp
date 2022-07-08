class Solution {
public:
    int search(vector<int>& nums, int target) {
     int min=0,max=nums.size()-1,mid;
     while(min<=max)
     {
      mid=(min+max)/2;
      if(nums[mid]==target)
      {
       return mid;
      }
      else if(nums[mid]<target)
      {
       min=mid+1;
      }
      else
      {
       max=mid-1;
      }
     }
     return -1;
    }
};