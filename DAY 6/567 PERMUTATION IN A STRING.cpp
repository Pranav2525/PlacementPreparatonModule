class Solution {
public:
    bool areVectorsEqual(vector<int> a, vector<int> b)
    {
     for(int i=0;i<26;i++)
     {
      if(a[i]!=b[i])
      {
       return false;
      }
     }
     return true;
    }
    bool checkInclusion(string s1, string s2) {
     vector<int>freqS1(26,0);
     for(char c:s1)
     {
      freqS1[c-'a']++;
     }
     vector<int>freqS2(26,0);
     int start=0,end=0;
     while(end<s2.size())
     {
      freqS2[s2[end]-'a']++;
      if(end-start+1==s1.size())
      {
       if(areVectorsEqual(freqS1,freqS2))
       {
        return true;
       }
       else
       {
        freqS2[s2[start]-'a']--;
        start++;
        end++;
       }
      }
      else if(end-start+1<s1.size())
      {
       end++;
      }
     }
     return false;
    }
};