/*Next Permutation*/
//Time O(n) and Space O(1)
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int temp=-1;
        
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                temp=i;
                break;
            }
        }
        
        if(temp==-1)
        {
            reverse(arr.begin(),arr.end());
            return;
        }
        
        for(int i=n-1;i>temp;i--)
        {
            if(arr[i]>arr[temp])
            {
                swap(arr[i],arr[temp]);
                break;
            }
        }
        reverse(arr.begin() + temp + 1, arr.end());
    }
};

/*
Using in-built function

int main()
{
    vector<int> arr = { 2,4,1,7,5,0 };
    next_permutation(arr.begin(), arr.end());
    for (int num : arr)
        cout << num << " ";
    return 0;
}
*/