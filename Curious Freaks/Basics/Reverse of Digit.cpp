/*Reverse of Digit*/
class Solution {
  public:
    int reverseDigits(int n) {
        int rem=0;
        if(n==0)
        {
            return 0;
        }
        while(n!=0)
        {
            rem = rem*10 + (n%10);
            n=n/10;
        }
        return rem;
    }
};