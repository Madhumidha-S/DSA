// 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word, last;
        while(ss >> word) { last = word; }
        return word.length();
    }
};