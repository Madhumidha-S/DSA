// You are given two integer numbers in the form of string, the base a and the index b. You have to find the last digit of ab.
/*
For small inputs
class Solution {
  public:
    int getLastDigit(string a, string b) {
        int x = 1,i;
        int base = stoi(a);
        int ex = stoi(b);
        for(i=0;i<ex;i++)
        {
            x *= base;
        }
        return x%10;
    }
};
*/

class Solution
{
public:
    int getLastDigit(string a, string b)
    {
        if (b == "0")
            return 1;
        int lastDigit = a.back() - '0';

        vector<vector<int>> cycles = {
            {}, // 0 unused (fix this!)
            {1},
            {2, 4, 8, 6},
            {3, 9, 7, 1},
            {4, 6},
            {5},
            {6},
            {7, 9, 3, 1},
            {8, 4, 2, 6},
            {9, 1}};

        // Handle lastDigit == 0 explicitly:
        if (lastDigit == 0)
            return 0;

        const vector<int> &cycle = cycles[lastDigit];
        int cycleLen = cycle.size();

        int expMod = 0;
        for (char ch : b)
        {
            expMod = (expMod * 10 + (ch - '0')) % cycleLen;
        }

        int index = (expMod == 0) ? (cycleLen - 1) : (expMod - 1);
        return cycle[index];
    }
};