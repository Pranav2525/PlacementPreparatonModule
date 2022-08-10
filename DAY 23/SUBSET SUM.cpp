void help(int curr,int sum,vector<int>num,vector<int>&result)
{
 if(curr==num.size())
 {
  result.push_back(sum);
  return;
 }
 help(curr+1,sum+num[curr],num,result);
 help(curr+1,sum,num,result);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>result;
    help(0,0,num,result);
    sort(result.begin(),result.end());
    return result;
}