/*
Merge Intervals

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        if (intervals.empty()) return res;
        vector<int> current = intervals[0];

        for(int i = 1; i < n; i++)
        {
            if(intervals[i][0] <= current[1])
            {
                current[1] = max(current[1], intervals[i][1]);
            }
            else
            {
                res.push_back(current);
                current = intervals[i];
            }
        }
        res.push_back(current);
        return res;
    }
};

/*
Only for some instances

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        if (intervals.empty()) return res;
        if(n == 1) 
        {
            res.push_back(intervals[0]);
            return res;
        }
        
        for(int i = 0; i < n - 1; i++)
        {
            if(intervals[i][1] >= intervals[i+1][0])
            {
                res.push_back({intervals[i][0], intervals[i+1][1]});
                i++;
            }
            else
            {
                res.push_back(intervals[i]);
                if(i == n - 2)
                {
                    res.push_back(intervals[i+1]);
                }
            }
        }
        return res;
    }
};
*/