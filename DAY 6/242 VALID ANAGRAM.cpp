class Solution {
public:
    bool isAnagram(string s, string t) {
        string temp1,temp2;
        map<char,int>mp;
        int i;
        if(s.length()!=t.length())
        {
         return false;
        }
        for(i=0;i<s.length();i++)
        {
         mp[s[i]]++;
         mp[t[i]]--;
        }
        for(auto i:mp)
        {
         if(i.second!=0)
         {
          return false;
         }
        }
        return true;
    }
};