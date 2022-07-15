class Solution {
public:
    string reverseWords(string s) {
     int i=0,size=0,start=0;
     {
      for(int i=0;i<s.size();i++)
      {
       if(s[i]!=' ')
       {
        size++;
       }
       else
       {
        reverse(s.begin()+start,s.begin()+start+size);
        start=i+1;
        size=0;
       }
      }
     }
     if(size>0)
     {
      reverse(s.begin()+start,s.begin()+start+size);
     }
     return s;
    }
};