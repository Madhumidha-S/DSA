/*GCD*/
//Optimised Code
class Solution {
  public:
    int gcd(int a, int b) {
        int temp = min(a,b);
        
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
};

/*
Also,

int gcd(int a, int b)
{
    int temp = min(a,b);
    while(temp>0)
    {
        if(a%temp ==0 && b%temp==0)
        {
            break;
        }
        temp--;
    }
    return temp;
}
*/