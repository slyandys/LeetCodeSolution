class Solution {
public:
    vector<int> countBits(int num) {
        int tmp = 0;
        vector<int> cBits;
        
		// O(nlogn) solution
        for (int i = 0; i<=num; ++i) {
            for (int j = i; j > 0;) {
                if (j % 2 != 0) {
                    tmp++;
                }
                j /= 2;
            }
            cBits.push_back(tmp);
            tmp = 0;
        }
        return cBits;
    }
};