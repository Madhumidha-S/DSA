#include <bits/stdc++.h>
using namespace std;

// Using Swap
// Time O(n) and Space(1)
class Solution
{
public:
    void reverseArray(vector<int> &arr)
    {
        int n = arr.size();
        int j = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[j]);
            j--;
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
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends

/*
Another way(Using Temp Array)
Time O(n) and Space O(n)

    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[10],j=0;

    for(int i = n-1; i>=0 ; i--)
    {
        temp[j] = arr[i];
        j++;
    }

    for(int i = 0;i<n;i++)
    {
        arr[i] = temp[i];
    }

*/