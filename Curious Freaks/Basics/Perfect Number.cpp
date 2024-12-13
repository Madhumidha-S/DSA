/*Perfect Number*/

class Solution {
  public:
    int isPerfectNumber(int n) {
        int temp=0,i=1;
        while(i<n)
        {
            if(n%i == 0)
                temp+=i;
                i++;
        }
        if(temp == n)
            return true;
        else 
            return false;
    }
};