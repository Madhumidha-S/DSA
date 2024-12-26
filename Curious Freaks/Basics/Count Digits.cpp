/*Counting Digits in n*/
class Solution
{
public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n)
    {
        int temp = n, count = 0;
        while (temp > 0)
        {
            int d = temp % 10;
            if (d != 0 && n % d == 0)
                count++;
            temp = temp / 10;
        }
        return count;
    }
};