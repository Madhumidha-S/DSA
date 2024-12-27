/*Check whether two Arrays are equal or not.*/

class Solution
{
public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }
};