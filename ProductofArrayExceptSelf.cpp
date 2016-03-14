class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1;
        int size = nums.size();
        int zerocount = 0;
        
        // Multiple all
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) {
                zerocount++;
                continue;
            }
            total = total * nums[i];
        }
        
        // Divide each
        if (zerocount == 1) {
            for (int i = 0; i < size; i++) {
                if (nums[i] == 0) {
                    nums[i] = total;
                } else {
                    nums[i] = 0; 
                }
            } 
        } else if (zerocount >= 2) {
            for (int i = 0; i < size; i++) {
                nums[i] = 0; 
            }
        } else {
            for (int i = 0; i < size; i++) {
                nums[i] = total / nums[i]; 
            }
        }
        
        return nums;
    }
};