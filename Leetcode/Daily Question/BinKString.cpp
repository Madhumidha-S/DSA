// 1461. Check If a String Contains All Binary Codes of Size K
// Given a binary string s and an integer k, return true if every binary code of length k is a substring of s. Otherwise, return false. 
// Example 1:
// Input: s = "00110110", k = 2
// Output: true
// Explanation: The binary codes of length 2 are "00", "01", "10", and "11". They can be all found as substrings at indices 0, 1, 3, and 2 respectively.

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int totalRequired = 1 << k;
        if (s.size() < (size_t)totalRequired + k - 1) return false;
        std::unordered_set<std::string> seen;
        for(int i = 0; i <= (int)s.size() - k; i++) {
            seen.insert(s.substr(i, k));
            if (seen.size() == totalRequired) return true;
        }
        return seen.size() == totalRequired;
    }
};