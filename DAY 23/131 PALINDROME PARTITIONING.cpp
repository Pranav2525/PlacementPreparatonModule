class Solution {
vector<vector<string>>ans;
bool isPalin(string &s)
{
 int pt1=0;
 int pt2=s.size()-1;
 while(pt1<pt2)
 {
  if(s[pt1]!=s[pt2])
  {
   return false;
  }
  pt1++;pt2--;
 }
 return true;
}
void palin(vector<string>&curr,string &s,int i)
{    
 if(i==s.size())
 {
  ans.push_back(curr);
  return;
 }
 string temp="";
 for(int k=i;k<s.size();k++)
 {
  temp+=s[k];
  if(isPalin(temp))
  {
   curr.push_back(temp);
   palin(curr,s,k+1);
   curr.pop_back();            
  }
 }       
}    
public:
    vector<vector<string>> partition(string s) {
        vector<string>curr;
        palin(curr,s,0);
        return ans;
    }
};