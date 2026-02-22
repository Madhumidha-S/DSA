// 868. Binary Gap
// Given a positive integer n, find and return the longest distance between any two adjacent 1's in the binary representation of n. If there are no two adjacent 1's, return 0.
// Two 1's are adjacent if there are only 0's separating them (possibly no 0's). The distance between two 1's is the absolute difference between their bit positions. For example, the two 1's in "1001" have a distance of 3. 

// Example 1:
// Input: n = 22
// Output: 2
// Explanation: 22 in binary is "10110".
// The first adjacent pair of 1's is "10110" with a distance of 2.
// The second adjacent pair of 1's is "10110" with a distance of 1.
// The answer is the largest of these two distances, which is 2.
// Note that "10110" is not a valid pair since there is a 1 separating the two 1's underlined.
class Solution {
public:
    int binaryGap(int n) {
        vector<int> bin;
        int index = 0;
        int maxdist = 0;

        while(n > 0) {
            int rem = n % 2;
            if(rem == 1) { bin.push_back(index); }
            n = n / 2;
            index++;
        }

        if(bin.size() < 2) {
            return 0;
        }

        for(int i = 1; i < bin.size(); i++) {
            int curd = bin[i] - bin[i-1];
            if(curd > maxdist) {
                maxdist = curd;
            }
        }
        
        return maxdist;
    }
};