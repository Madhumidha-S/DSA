
// Union of Two Arrays

// Here used unordered_map, but using map is better(In unordered_map the keys are stored in random order, while in the map the keys are stored in sorted order)
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int,int> c;
        for(int i = 0; i < n1; i++)
        {
            c[nums1[i]]++;
        }
        for(int j = 0; j < n2; j++)
        {
            c[nums2[j]]++;
        }
        vector<int> res;
        for(auto& r : c)
        {
            if(r.second >= 1)
            { res.push_back(r.first); }
        }
        sort(res.begin(), res.end());
        return res;
    }
};