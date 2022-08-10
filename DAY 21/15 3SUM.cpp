class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     vector<vector<int>>result;
     vector<int>temp;
     sort(nums.begin(),nums.end());
     int j,k;
     for(int i=0;i<nums.size()-2;i++)
     {
      if(i==0||nums[i]!=nums[i-1])
      {
       j=i+1;
       k=nums.size()-1;
       while(j<k)
       {
        if(nums[j]+nums[k]+nums[i]==0)
        {
         temp.clear();
         temp.push_back(nums[i]);
         temp.push_back(nums[j]);
         temp.push_back(nums[k]);
         result.push_back(temp);
         while(j<k&&nums[j]==nums[j+1])
         {
          j++;
         }
         while(j<k&&nums[k]==nums[k-1])
         {
          k--;
         }
         j++;k--;
        }
        else if(nums[j]+nums[k]+nums[i]<0)
        {
         j++;
        }
        else
        {
         k--;
        }
       }
      }
     }
     return result;
    }
};