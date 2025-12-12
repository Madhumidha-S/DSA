// 20. Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        vector<char> p;
        if(n%2 != 0) return false;
        if(n == 0 || n == 1) return false;

        for(char c : s)
        {
            if(c == '{' || c == '[' || c == '(')
            {
                p.push_back(c);
            }
            else if(c == '}' || c == ']' || c == ')')
            {
                if(p.empty()) return false;
                char temp = p.back();
                p.pop_back();
                if((temp == '{' && c != '}') ||
                (temp == '(' && c != ')') ||
                (temp == '[' && c != ']'))
                {
                    return false;
                }
            }
        }
        return p.empty();
    }
};