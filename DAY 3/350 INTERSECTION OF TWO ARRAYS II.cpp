class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     vector<int>result;
     map<int,int>mp;
     for(int i=0;i<nums1.size();i++)
     {
      mp[nums1[i]]++;
     }
     for(int i=0;i<nums2.size();i++)
     {
      if(mp[nums2[i]]>0)
      {
       mp[nums2[i]]--;
      }
     }
     for(int i=0;i<nums1.size();i++)
     {
      if(mp[nums1[i]]<=0)
      {
       result.push_back(nums1[i]);
      }
      else
      {
       mp[nums1[i]]--;
      }
     }
     return result;
    }
};