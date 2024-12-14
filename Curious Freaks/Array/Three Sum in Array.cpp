/*Three Sum in Array*/

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n= arr.size();
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]+arr[k] == target)
                        return true;
                }
            }
        }
        return false;
    }
};