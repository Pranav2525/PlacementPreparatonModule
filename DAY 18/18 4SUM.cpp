class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     vector<vector<int>>result;
     vector<int>temp;
     sort(nums.begin(),nums.end());
     int k,l;
     if(nums.size()<4)
     {
      return result;
     }
     for(int i=0;i<nums.size()-3;i++)
     {
      if(i==0||nums[i]!=nums[i-1])
      {
       for(int j=i+1;j<nums.size()-2;j++)
       {
        if(j==i+1||nums[j]!=nums[j-1])
        {
         k=j+1;
         l=nums.size()-1;
         long long int sum=(long long)target-(long long)(nums[i]+nums[j]);
         while(k<l)
         {
          if(nums[k]+nums[l]==sum)
          {
           temp.clear();
           temp.push_back(nums[i]);
           temp.push_back(nums[j]);
           temp.push_back(nums[k]);
           temp.push_back(nums[l]);
           result.push_back(temp);
           while(k<l&&nums[k]==nums[k+1])
           {
            k++;
           }
           while(k<l&&nums[l]==nums[l-1])
           {
            l--;
           }
           k++;
           l--;
          }
          else if(nums[k]+nums[l]<sum)
          {
           k++;
          }
          else
          {
           l--;
          }
         }
        }
       }
      }
     }
     return result;
    }
};