// 1011. Capacity To Ship Packages Within D Days

class Solution {
public:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int curr = 0;
        int neededDays = 1;
        
        for (int w : weights) {
            if (curr + w > capacity) {
                neededDays++;
                curr = 0;
            }
            curr += w;
        }
        
        return neededDays <= days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for (int w : weights) high += w;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (canShip(weights, days, mid)) {
                high = mid;      // try smaller capacity
            } else {
                low = mid + 1;   // need bigger capacity
            }
        }
        
        return low;
    }
};
