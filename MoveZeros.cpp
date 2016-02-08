class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i=0,j=0;i<nums.size();i++) {
            if (nums[i]!=0 && i>j && nums[j]==0) {
                nums[j] = nums[i];
                nums[i]=0;
                j++;
            } else if (nums[j] != 0){
                j++;
                continue;
            }
        }
    }
};