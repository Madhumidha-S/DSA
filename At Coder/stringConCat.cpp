/*
Problem Statement
You are given N types of strings You perform the following operation once:
Choose distinct integers i and j (1≤i≤N,1≤j≤N) and concatenate S i  and S j in this order.
How many different strings can be obtained as a result of this operation?
If different choices of (i,j) result in the same concatenated string, it is counted as one string.

Sample Input 1
Copy
4
at
atco
coder
der
Sample Output 1
Copy
11
The possible strings are atatco, atcoat, atcoder, atcocoder, atder, coderat, coderatco, coderder, derat, deratco, dercoder, which are 
11 strings.

Thus, print 11.
*/

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <set>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<string> S(N);
    for(int i = 0; i < N; i++)
    {
        cin>>S[i];
    }
    set<string> str;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i != j)
            { str.insert(S[i] + S[j]); }
        }
    }
    cout << str.size();
}
