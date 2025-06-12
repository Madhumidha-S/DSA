/*Majority Votes in Array*/
//Time O(n) and Space O(1)
//Boyer-Moore’s Voting Algorithm

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int e1=-1,e2=-1;
        int c1=0,c2=0;
        int fc1=0,fc2=0;
        
        for(int i=0;i<n;i++)
        {
            if(c1==0)
            {
                e1 = arr[i];
                c1++;
            }
            else if(c2==0 && arr[i]!=e1)
            {
                e2 = arr[i];
                c2++;
            }
            else if(arr[i]==e1)
            {
                c1++;
            }
            else if(arr[i]==e2)
            {
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]==e1)
            {
                fc1++;
            }
            else if(arr[i] == e2)
            {
                fc2++;
            }
        }
        
        vector<int> temp;
        
        if(fc1>(n/3))
        {
            temp.push_back(e1);
        }
        if((fc2>n/3) && (e1!=e2))
        {
            temp.push_back(e2);
        }
        
        if(temp.size()==2 && temp[0]>temp[1])
        {
            swap(temp[0],temp[1]);
        }
        return temp;
    }
};