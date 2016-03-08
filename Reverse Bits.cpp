class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m = 0;
        int i = 32;
        while (i > 0) {
            // last bit is 1
            if (n % 2 != 0) {
                m = m << 1;
                m = m | 1;
            } else {
                m = m << 1;
            }
            n = n >> 1;
            i--;
        }
        return m;
    }
};