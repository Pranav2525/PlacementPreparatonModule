class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     int i;
     map<char,int>map;
     for(i=0;i<magazine.size();i++)
     {
      map[magazine[i]]++;
     }
     for(i=0;i<ransomNote.size();i++)
     {
      if(map[ransomNote[i]]==0)
      {
       return false;
      }
      map[ransomNote[i]]--;
     }
     return true;
    }
};