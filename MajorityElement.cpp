class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int count = 0;
        int i = 0;
        for (; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                count++;
            } else {
                if (count >= nums.size() / 2) {
                    //found the majority numbers
                    return nums[i];
                } else {
                    count = 0;
                }
            }
        }
        
        return nums[i];
    }
};