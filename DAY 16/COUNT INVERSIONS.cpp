#include <bits/stdc++.h> 
long long merge(long long *arr,long long *temp,int left,int mid,int right)
{
 long long invcount=0;
 int i=left;
 int j=mid;
 int k=left;
 while((i<=mid-1) && (j<=right))
 {
  if(arr[i]<=arr[j])
  {
   temp[k++]=arr[i++];
  }
  else
  {
   temp[k++]=arr[j++];
   invcount=invcount+(mid-i);
  }
 }
 while(i<=mid-1)
 {
  temp[k++]=arr[i++];
 }
 while(j<=right)
 {
  temp[k++]=arr[j++];
 }
 for(i=left;i<=right;i++)
 {
  arr[i]=temp[i];
 }  
 return invcount;
}

long long merge_Sort(long long *arr,long long *temp,int left,int right)
{
 long long mid,invcount=0;
 if(right>left)
    {
     mid=(left+right)/2;
     invcount+=merge_Sort(arr,temp,left,mid);
     invcount+=merge_Sort(arr,temp,mid+1,right);
     invcount+=merge(arr,temp,left,mid+1,right);
    }
    return invcount;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[1000000];
    return merge_Sort(arr,temp,0,n-1);
    
}