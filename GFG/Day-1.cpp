/* Second largest number in an array*/
#include <bits/stdc++.h>
using namespace std;

// Time O(n) and Space O(1)
class Solution
{
public:
    int getSecondLargest(vector<int> &arr)
    {
        int n = arr.size();
        int m1, m2;
        m1 = -1;
        m2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (m1 < arr[i])
            {
                m1 = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (m2 <= arr[i] && arr[i] != m1)
            {
                m2 = arr[i];
            }
        }
        return m2;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends

/**
Another Logic: Time O(n) and Space O(1)

for(int i=0;i<n;i++)
{
    if(m1<arr[i])
    {
        m2 = m1;
        m1 = arr[i];
    }
    else if(m2<arr[i] && arr[i]<m1)
    {
        m2 = arr[i];
    }
}
 */