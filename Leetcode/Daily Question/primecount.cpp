// 762. Prime Number of Set Bits in Binary Representation
// Given two integers left and right, return the count of numbers in the inclusive range [left, right] having a prime number of set bits in their binary representation.
// Recall that the number of set bits an integer has is the number of 1's present when written in binary. For example, 21 written in binary is 10101, which has 3 set bits.
// Example 1:
// Input: left = 6, right = 10
// Output: 4
// Explanation:
// 6 -> 110 (2 set bits, 2 is prime)
// 7 -> 111 (3 set bits, 3 is prime)
// 8 -> 1000 (1 set bit, 1 is not prime)
// 9 -> 1001 (2 set bits, 2 is prime)
// 10 -> 1010 (2 set bits, 2 is prime)

class Solution {
public:
    bool isPrime(int n) {
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n%2 == 0 || n%3 == 0) return false;
        for(int i = 5; i*i <= n; i+=6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int res = 0;
        for(int j = left; j <= right; j++) {
            // int temp = j;
            int n = 0;
            // while(temp > 0){
            //     int rem = temp % 2;
            //     if(rem == 1){ n++; }
            //     temp /= 2;
            // }
            n = __builtin_popcount(j);
            if(isPrime(n)){
                res++;
            }
        }
        return res;
    }
};