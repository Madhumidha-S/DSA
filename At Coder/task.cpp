/* 
Problem Statement
Takahashi set task goals for 
N days.

He aimed to complete 
A 
i
​
  tasks on day 
i(1≤i≤N), and actually completed 
B 
i

  tasks.

Find the number of days when he completed more tasks than his goal.
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i]>>B[i];
    }
    int count = 0;
    for(int j=0;j<n;j++)
    {
        if((B[j]-A[j]) > 0)
        {
            count++;
        }
    }
    cout<<count;
}