def isPrime(N):
    if N<2:
        return False
    for i in range(2,int(N**0.5) +1):
        if N%i == 0:
            return False
    return True

def nPrime(N):
    count = 0
    num = 1
    while count<N:
        num +=1
        if isPrime(num):
            count += 1
    return num

def alice_choice(N):
    prime = nPrime(N) 
    return prime ** 2

N = int(input())
print(alice_choice(N))
