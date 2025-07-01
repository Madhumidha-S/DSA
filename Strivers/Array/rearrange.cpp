/*
Rearrange Array Elements by Sign
You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.
You should return the array of nums such that the the array follows the given conditions:
Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.
Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res;
        int k = 0;
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] > 0)
            { res[k] = nums[j]; k+=2; }
        }
        k = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < 0)
            { res[k] = nums[i]; k+=2; }
        }
        return res;
    }
};

/*
Memory Limit Exceeded

class Solution {
public:
   vector<int> rearrangeArray(vector<int>& nums) {
       int ns = nums.size();
       vector<int> p;
       vector<int> n;
       for(int i = 0; i < ns; i++)
       {
           if(nums[i] > 0)
           { p.push_back(nums[i]); }
           else if(nums[i] < 0)
           { n.push_back(nums[i]); }
       }
       vector<int> res;
       for(int j = 0; j < ns; j+2)
       {
           res.push_back(p[j]);
           res.push_back(n[j+1]);
       }
       return res;
   }
};
*/