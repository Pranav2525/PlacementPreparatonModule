class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int a=nums1.size();
    m--;n--;a--;
    while(m>=0&&n>=0)
    {
     if(nums1[m]>=nums2[n])
     {
      nums1[a--]=nums1[m--];
     }
     else
     {
      nums1[a--]=nums2[n--];
     }
    }
    while(m>=0)
    {
     nums1[a--]=nums1[m--];
    }
    while(n>=0)
    {
     nums1[a--]=nums2[n--];
    }
 }
};