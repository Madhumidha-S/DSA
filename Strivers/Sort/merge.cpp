class Solution {
public:
    void merge(vector<int>& nums, int p, int q, int r)
    {
        int nl = q-p+1;
        int nr = r-q;
        vector<int> L(nl), R(nr);
        for(int i = 0; i < nl; i++)
        {
            L[i] = nums[p+i];
        }
        for(int j = 0; j < nr; j++)
        {
            R[j] = nums[q+j+1];
        }
        int i = 0, j = 0, k = p;
        while(nl > i && nr > j)
        {
            if(L[i] <= R[j])
            { nums[k] = L[i]; i++; }
            else
            { nums[k] = R[j]; j++; }
            k++;
        }
        while(i < nl)
        {
            nums[k] = L[i];
            i++; k++;
        }
        while(j < nr)
        {
            nums[k] = R[j];
            j++; k++;
        }
    }

    void mgs(vector<int> &nums, int p, int r)
    {
        if (p >= r) return;
        int q = (p+r)/2;
        mgs(nums,p,q);
        mgs(nums,q+1,r);
        merge(nums,p,q,r);
    }
    vector<int> mergeSort(vector<int>& nums) {
        int n = nums.size();
        mgs(nums,0,n-1);
        return nums;
    }
};
