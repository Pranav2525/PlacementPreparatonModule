class Solution {
public:
void solve(string &s,vector<string>&v,string t,int i,int &n)
{
 if(i==n)
 {
  v.push_back(t);
  return;
 }   
 if(s[i]>='0'&&s[i]<='9')
 {
  solve(s,v,t+s[i],i+1,n);
 }    
 else
 {
  solve(s,v,t+(char)tolower(s[i]),i+1,n);
  solve(s,v,t+(char)toupper(s[i]),i+1,n);
 }
}
vector<string> letterCasePermutation(string s) {   
    int n=s.size();
    vector<string>v;
    solve(s,v,"",0,n);
    return v;
}
};