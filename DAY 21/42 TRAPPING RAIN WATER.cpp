class Solution {
public:
    int trap(vector<int>& height) {
     int max1=0,max2=0,water=0,water1=0;
     vector<int>vec1(height.size(),0);
     vector<int>vec2(height.size(),0);
     for(int i=height.size()-1;i>=0;i--)
     {
      max1=vec1[i]=max(max1,height[i]);
     }
     for(int i=0;i<height.size();i++)
     {
      max2=vec2[i]=max(max2,height[i]);
     }
     if(height.size()<=2)
     {
      return 0;
     }
     for(int i=1;i<height.size()-1;i++)
     {
      water1=min(vec2[i-1],vec1[i+1])-height[i];
      if(water1>0)
      {
       water+=water1;
      }
     }
     return water;
    }
};