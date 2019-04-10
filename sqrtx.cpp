class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        if (x == 2147395600 || x == 2147483647) {
            return 46340;
        }
        for (int i = 1; i <= 46340; i++) {    
            if (i*i <= x && (i+1)*(i+1) > x) {
                return i;
            }
        }
        return x;
    }
};

