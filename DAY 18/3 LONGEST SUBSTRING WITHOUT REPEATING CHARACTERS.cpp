class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     string s1;
     int max=0,curr=0;
     for(int i=0;i<s.size();i++)
     {
      if(s1.find(s[i])==-1)
      {
       s1+=s[i];
       curr++;
       if(curr>max)
       {
        max=curr;
       }
      }
      else
      {
       s1.erase(s1.begin(),s1.begin()+s1.find(s[i])+1);
       s1+=s[i];
       curr=s1.size();
      }
     }
     return max;
    }
};