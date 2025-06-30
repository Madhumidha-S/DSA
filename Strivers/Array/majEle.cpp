// Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> c;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            c[nums[i]]++;
        }
        int result = 0;
        for(auto& k : c)
        {
            if(k.second > (n/2))
            {
                result = k.first;
            }
        }
        return result;
    }
};



// Also

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> c;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            c[nums[i]]++;
        }
        vector<int> result;
        for(auto& k : c)
        {
            if(k.second > (n/3))
            {
                result.push_back(k.first);
            }
        }
        return result;
    }
};