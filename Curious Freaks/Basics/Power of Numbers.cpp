/*Power of Numbers*/

class Solution {
  public:
    int reverseExponentiation(int n) {
        int temp=0;
        int num=n;
        if(n==0)
        {
            return 0;
        }
        while(n>0)
        {
            temp = temp*10 + (n%10);
            n=n/10;
        }
        return pow(num,temp);
    }
};