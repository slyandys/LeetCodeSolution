class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 2)
            return nums;
            
        vector<int> myvec;
        int i = 0;
        
        // first element
        if (nums[i] != nums[i + 1]) {
            myvec.push_back(nums[i]);
        }
        
        // 2 to n - 1
        for (i = 1; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1] && nums[i] != nums[i - 1]) {
                myvec.push_back(nums[i]);
            }
        }
        
        // last element
        if (nums[i] != nums[i - 1]) {
            myvec.push_back(nums[i]);
        }
        
        return myvec;
    }
};