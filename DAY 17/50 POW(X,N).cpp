class Solution {
public:
    double myPow(double x, int n) {
        long int m;
        double power=1,temp=1;
        if(x==1||n==1)
        {
         power=x;
         return power;
        }
        if(n<0)
        {
         m=abs(n);
        }
        else
        {
         m=n;
        }
        if(m==1)
        {
         return 1/x;
        }
        while(m!=0)
        {
         if(m%2==0)
         {
          x*=x;
          power=x;
          m/=2;
         }
         else if(m==1)
         {
          break;
         }
         else
         {
          temp*=x;
          m-=1;
         }
        }
        if(n>=0)
        {
         return power*temp;
        }
        else
        {
         power= 1/(power*temp);
         return power;
        }
    }
};