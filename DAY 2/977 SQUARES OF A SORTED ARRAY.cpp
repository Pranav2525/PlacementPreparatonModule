class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n=nums.size();
     vector<int>result;
     int point,pointer2;
     if(nums[n-1]<0)
     {
      for(int i=n-1;i>=0;i--)
      {
       result.push_back(pow(nums[i],2));
      }
     }
     else if(nums[0]>=0)
     {
      for(int i=0;i<n;i++)
      {
       result.push_back(pow(nums[i],2));
      }
     }
     else
     {
      for(int i=0;i<n;i++)
      {
       if(nums[i]<0&&nums[i+1]>=0)
       {
        point=i+1;
       }
      }
      pointer2=point-1;
      while(pointer2>=0&&point<n)
      {
       if(abs(nums[pointer2])<=nums[point])
       {
        result.push_back(pow(nums[pointer2],2));
        pointer2--;
       }
       else
       {
        result.push_back(pow(nums[point],2));
        point++;
       }
      }
      while(pointer2>=0)
      {
       result.push_back(pow(nums[pointer2],2));
       pointer2--;
      }
      while(point<n)
      {
       result.push_back(pow(nums[point],2));
       point++;
      }
     }
     return result;
    }
};