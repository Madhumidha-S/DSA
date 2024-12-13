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
 
/*
Also;

for(int i=0; i<n-1;i++)
{
    for(int j=i+1; j<n;j++)
    {
        int temp = arr[i] + arr[j];
        if(temp == target)
            return true;
    }
}
return false;
*/