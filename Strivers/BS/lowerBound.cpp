/*
Lower Bound

Given a sorted array of nums and an integer x, write a program to find the lower bound of x.
The lower bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
If no such index is found, return the size of the array.
Examples:
Input : nums= [1,2,2,3], x = 2
Output:1
Explanation:
Index 1 is the smallest index such that arr[1] >= x.
Input : nums= [3,5,8,15,19], x = 9
Output: 3
Explanation:
Index 3 is the smallest index such that arr[3] >= x.
*/


// Linear - O(n)
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int ind = -1;
        for(int i = n - 1; i >= 0; i--)
        {
            if(nums[i] >= x)
            {
                ind = i;
            }
        }
        return ind;
    }
};

// Binary - O(log n)

class Solution{
public:
    int bs(vector<int>& nums, int target, int left, int right, int& ind)
    {
        if(left > right) return ind;
        int mid = left + (right - left) / 2;

        if(nums[mid] >= target)
        {
            ind = mid;
            return bs(nums, target, left, mid - 1, ind);
        }
        else
        {
            return bs(nums, target, mid + 1, right, ind);
        }
    }
    int lowerBound(vector<int> &nums, int x){
        int ind = nums.size();
        return bs(nums, x, 0, nums.size() - 1, ind);
    }
};