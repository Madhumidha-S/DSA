#include <bits/stdc++.h>
using namespace std;

// Time O(n) and Space O(1)
class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        int n = arr.size(), j = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

/**
Library method:

void pushZerosToEnd(vector<int> &arr) {
    stable_partition(arr.begin(), arr.end(), [](int n)
    {
        return n != 0;
    });
}

Initial Logic:

int main()
{
    int n = 5, j =4, temp;
    int arr[5] = {3,5,0,0,4};

    for(int i= 0; i<n; i++)
    {
        if(arr[i-1] != 0)
        {
            if(arr[i] == 0)
            {
                for(int k = i; k<n-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                arr[j] = 0;
            }
        }
        else
        {
            for(int k = i-1; k<n-1; k++)
            {
                arr[k] = arr[k+1];
            }
            arr[j] = 0;
        }
    }
    j--;
}

*/