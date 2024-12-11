/*Another way of Two Sum in an Array*/
//Way 1 using two loops[Time O(n power 2)]
//Way 2 sorting and finding low,high of the array
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int low = 0, high = n-1;
        
        while(low<high)
        {
            int sum = arr[low]+arr[high];
            if(sum == target)
            {
                return true;
            }
            else if(sum<target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return false;
    }
};