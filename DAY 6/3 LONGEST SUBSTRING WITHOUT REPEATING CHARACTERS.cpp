class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,lols=0,lolsc=0;
        string s1;
        for(i=0;i<s.length();i++)
        {
         if(s1.find(s[i])==-1)
         {
          s1+=s[i];
          lolsc++;
          if(lolsc>lols)
          {
           lols=lolsc;
          }
         }
         else
         {
          s1.erase(s1.begin(),s1.begin()+s1.find(s[i])+1);
          s1+=s[i];
          lolsc=s1.length();
         }
        }
        return lols;
    }
};