class Solution {
public:
	// The zero will only show if there are 2 and 5 in its factors
	// and # of 2 is far more greater than 5 so one possible solution
	// is count the # of factor 5 inside n
    int trailingZeroes(int n) {
        int count = 0;
        for (int i = n; i >= 5;) {
            count += i / 5;
            i /= 5;
        }
        return count;
    }
};