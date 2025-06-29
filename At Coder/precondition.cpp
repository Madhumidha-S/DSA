/* 
Problem Statement
You are given strings 
S and 
T consisting of lowercase and uppercase English letters. Determine whether the string 
S satisfies the following condition:

Every uppercase letter in S that is not at the beginning is immediately preceded by a character contained in 
T. More formally, for all integers i such that 2≤i≤∣S∣, if the i-th character of S is uppercase, then the (i−1)-th character of S is contained in T.
Constraints
Each of S and T is a string consisting of lowercase and uppercase English letters with length between 
1 and 100, inclusive.
Input
The input is given from Standard Input in the following format:
S
T
Output
If 
S satisfies the condition in the problem statement, output Yes. Otherwise, output No.

Sample Input 1
Copy
AtCoder
Total
Sample Output 1
Copy
Yes
The only uppercase letter in 
S that is not at the beginning is the 
3rd character C. The immediately preceding character t is contained in 
T, so output Yes.

Sample Input 2
Copy
aBCdE
abcdcba
Sample Output 2
Copy
No
The 
3rd character of 
S is the uppercase letter C, and its immediately preceding character is B, but B is not contained in 
T.

*/#include<iostream>
#include <cctype>
using namespace std;

bool check(string S, string T)
{
    for(int i = 1; i < S.length(); i++)
    {
        if(isupper(S[i])){
            if(T.find(S[i-1]) == string::npos)
            { return false; }
        }
    }
    return true;
}

int main()
{
    string S,T;
    getline(cin,S);
    getline(cin,T);
    bool res = check(S,T);
    if(res) cout<<"Yes";
    else cout<<"No";
}