class Solution:
    def isPrime(self, n):
        if n <= 1:
            return False
        if n == 2:
            return True
        if n % 2 == 0:
            return False
        i = 3
        while i * i <= n:
            if n % i == 0:
                return False
            i += 2
        return True

    def sumOfLargestPrimes(self, s):
        n = len(s)
        prime = set()

        for i in range(n):
            num = 0
            for j in range(i, n):
                num = num * 10 + (ord(s[j]) - ord('0'))
                if self.isPrime(num):
                    prime.add(num)

        primes = sorted(prime, reverse=True)
        ps = min(3, len(primes))
        return sum(primes[:ps])