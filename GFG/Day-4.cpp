/*Rotating array d times in counter-clockwise direction*/
//Time O(n) and Space O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int> &arr, int d)
    {
        int n = arr.size();
        int temp[n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[(i + d) % n];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number)
        {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends

/*
int n = arr.size();
  Time O(n) and Space O(1)
    Handle the case where d > size of array
    d %= n;
  
    Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
  
    Reverse the entire array
    reverse(arr.begin(), arr.end());
*/