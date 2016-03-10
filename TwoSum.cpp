class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> myvec;
        
		// The great example shows why don't put size() in a loop
        // 500+ ms
        // for (int i = 0; i < nums.size(); i++) {
        //     target = target - nums[i];
            
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (target - nums[j] == 0) {
        //             myvec.push_back(i);
        //             myvec.push_back(j);
        //             return myvec;
        //         }
        //     }
            
        //     target = target + nums[i];
        // }
        
        // ~286 ms
        // for (int i = nums.size() - 1 ; i >= 0; i--) {
        //     target = target - nums[i];
            
        //     for (int j = i - 1; j >= 0; j--) {
        //         if (target - nums[j] == 0) {
        //             myvec.push_back(i);
        //             myvec.push_back(j);
        //             return myvec;
        //         }
        //     }
            
        //     target = target + nums[i];
        // }
        
		// 233 ms
        int i = 0;
        int j = 0;
        int size = nums.size() - 1;
        for (i = size; i >= 0; i--) {
            target = target - nums[i];
            
            for (int j = i - 1; j >= 0; j--) {
                if (target - nums[j] == 0) {
                    myvec.push_back(i);
                    myvec.push_back(j);
                    return myvec;
                }
            }
            
            target = target + nums[i];
        }
    }
};