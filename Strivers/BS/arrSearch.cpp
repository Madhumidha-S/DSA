// 33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int x = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                x = i;
                return x;
            }
        }
        return x;
    }
};

// 81. Search in Rotated Sorted Array II

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool x = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                x = true;
                return x;
            }
        }
        return x;
    }
};