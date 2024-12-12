/*Armstrong Number*/

class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum=0;
        int num=n;
        int len = to_string(n).length();
        
        while(num>0)
        {
            sum += pow(num%10, len);
            num/=10;
        }
        
        if(sum==n)
            return true;
        else
            return false;
    }
};