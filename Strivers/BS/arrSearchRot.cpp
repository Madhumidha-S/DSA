// 153. Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
        int sm = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(sm > nums[i]){
                sm = nums[i];
            }
        }
        return sm;
    }
};


// 162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int mi = 0;
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(max < nums[i])
            {
                max = nums[i];
                mi = i;
            }
        }
        return mi;
    }
};

// 540. Single Element in a Sorted Array

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 0; i < nums.size(); i+=2) {
            if( (i == nums.size() - 1) || (nums[i] != nums[i+1])) {
                ans = nums[i];
                return ans;
            }
        }
        return -1;
    }
};