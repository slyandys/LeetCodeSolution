class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Old-fashion way meet Time limit boundary
        //int vsize = nums.size();
        //vector<int>::iterator begin = nums.begin();
        
        // for (int i = 0; i < vsize; i++) {
        //     for (int j = i + 1; j < vsize; j++) {
        //         if (nums[j] == nums[i]) {
        //             nums.erase(begin + j);
        //             vsize--;
        //         }
        //     }
        // }
        
        // Learned from stackoverflow
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        return nums.size();
    }
};