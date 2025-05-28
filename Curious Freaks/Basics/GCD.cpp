/*GCD*/
// Optimised Code
class Solution
{
public:
    int gcd(int a, int b)
    {
        int temp = min(a, b); // assignment seems to be optional

        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
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


int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
*/