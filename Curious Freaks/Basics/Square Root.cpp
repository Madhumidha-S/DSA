/*Square  Root*/

class Solution {
  public:
    int floorSqrt(int n) {
        int i=1;
        int res=1;
        
        if(n==1 || n==0)
        {
            return n;
        }
        
        while(res<=n)
        {
            i++;
            res = i*i;
        }
        return i-1;
    }
};
/*
Also,
int countSquares(int x)
{
    int sqr = sqrt(x);
    int result = (int)(sqr);
    return result;
}

Also,
    return (int)(pow(n,0.5));
*/