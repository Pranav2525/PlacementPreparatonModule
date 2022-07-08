// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
     long min=1,max=n,mid;
     while(min<=max)
     {
      mid=(min+max)/2;
      if(isBadVersion(mid))
      {
       max=mid-1;
      }
      else
      {
       min=mid+1;
      }
     }
     return min;
    }
};