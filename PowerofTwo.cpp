class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        
        int i = 0;
        while (n != 0) {
            if (n % 2 != 0) {
                i++;
            }
            n = n >> 1;
        }
        
        return i > 1 ? false : true;
    }
};