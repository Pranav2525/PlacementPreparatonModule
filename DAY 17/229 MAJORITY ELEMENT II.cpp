class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int count1=0,count2=0,num1=0,num2=0,minoccurence=floor(nums.size()/3);
     vector<int>result;
     for(int i=0;i<nums.size();i++)
     {
      if(num1==nums[i])
      {
       count1++;
      }
      else if(num2==nums[i])
      {
       count2++;
      }
      else if(count1==0)
      {
       num1=nums[i];
       count1=1;
      }
      else if(count2==0)
      {
       num2=nums[i];
       count2=1;
      }
      else
      {
       count1--;
       count2--;
      }
     }
     count1=0,count2=0;
     for(int i=0;i<nums.size();i++)
     {
      if(num1==nums[i])
      {
       count1++;
      }
      else if(num2==nums[i])
      {
       count2++;
      }
     }
     if(count1>minoccurence)
     {
      result.push_back(num1);
     }
     if(count2>minoccurence)
     {
      result.push_back(num2);
     }
     return result;
    }
};