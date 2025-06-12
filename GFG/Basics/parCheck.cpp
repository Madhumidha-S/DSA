/*
Parenthesis Checker
Difficulty: EasyAccuracy: 28.56%Submissions: 666K+Points: 2
Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
An input string is valid if:

         1. Open brackets must be closed by the same type of brackets.
         2. Open brackets must be closed in the correct order.
*/

class Solution
{
public:
    bool isBalanced(string &k)
    {
        int n = k.size();
        if (n % 2 != 0)
            return false;
        vector<char> a;
        for (int i = 0; i < n; i++)
        {
            if (k[i] == '(' || k[i] == '{' || k[i] == '[')
            {
                a.push_back(k[i]);
            }
            else if (k[i] == ')' || k[i] == '}' || k[i] == ']')
            {
                if (a.empty())
                    return false;
                char x = a.back();
                a.pop_back();
                if (
                    (x == '(' && k[i] != ')') ||
                    (x == '{' && k[i] != '}') ||
                    (x == '[' && k[i] != ']'))
                    return false;
            }
        }
        return a.empty();
    }
};