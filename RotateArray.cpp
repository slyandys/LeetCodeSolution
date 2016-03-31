class Solution {
public:
    void rotate(vector<int>& nums, int k) {
		// Solution 1
        int nsize = nums.size();
        vector<int> tmpVec;
        
        if (k > nsize) {
            k %= nsize;
        }

        for (int i = nsize - k; i < nsize; ++i) {
            tmpVec.push_back(nums[i]);
        }
        
        for (int i = 0; i < nsize - k; ++i) {
            tmpVec.push_back(nums[i]);
        }
        
        nums = tmpVec;
    }
};