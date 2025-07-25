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
    int M;
    cin>>N>>M;
    int A[N];
    int totSize = 0;
    for(int i = 0; i < N; i++)
    {
        cin>>A[i];
        totSize += A[i];
    }
    if(totSize <= M)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
