class Solution {
public:
    int firstUniqChar(string s) {
     unordered_map<char,int>map;
     int i,index=-1;
     for(i=0;i<s.length();i++)
     {
      map[s[i]]++;
     }
     for(i=0;i<s.length();i++)
     {
      if(map[s[i]]==1)
      {
       index=i;
       break;
      }
     }
     return index;
    }
};