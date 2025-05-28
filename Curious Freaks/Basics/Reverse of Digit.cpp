/*Reverse of Digit*/
class Solution
{
public:
    int reverseDigits(int n)
    {
        int rem = 0;
        if (n == 0)
        {
            return 0;
        }
        while (n != 0)
        {
            rem = rem * 10 + (n % 10);
            n = n / 10;
        }
        return rem;
    }
};

/*
Also,

int reverseNumber(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int reverse(int x) {
    bool isNeg = x<0;
    string s = to_string(x);
    s = string(s.rbegin(),s.rend());
    long r = stol(s);
    if(isNeg) r = -r;
    return static_cast<int>(r);
}
*/

/*

This Solution will take care of overflow, solves runtime error

int reverse(int x) {
        int rev = 0;
        while(x!=0)
        {
            int digit = x%10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) //Checks +ve Overflow
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) //Checks -ve Overflow
                return 0;
            rev = rev*10 + digit;
            x /= 10;
        }
        return rev;
    }
*/

/*
Reverse of String having with removal of non alphanumeric characters

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        string r = string(cleaned.rbegin(), cleaned.rend());
        return r == cleaned;
    }
};

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/