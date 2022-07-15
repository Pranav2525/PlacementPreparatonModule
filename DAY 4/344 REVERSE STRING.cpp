class Solution {
public:
    void reverseString(vector<char>& s) {
     int i=0,j=s.size()-1;
     char ch;
     while(i<=((s.size()-1)/2))
     {
      ch=s[i];
      s[i++]=s[j];
      s[j--]=ch;
     }
    }
};