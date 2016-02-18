class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int start = 1;
        int end = nums.size();
        
        // brute force
        for(int i = 0; i <= end-3; i++) {
            for (int j = i + 1; j <= end-2;j++) {
                if (nums[i] >= nums[j]) break;
                for (int k = j + 1; k <= end-1; k++) {
                    if (nums[j] == nums[k]) break;
                    if (nums[i] < nums[j] && nums[j] < nums[k]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};