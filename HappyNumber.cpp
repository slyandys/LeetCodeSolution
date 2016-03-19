class Solution {
public:
    bool isHappy(int n) {
        int tmp = n;
        int ncopy = n;
        
		// Find the specific 2 digits for the happy number
        while (ncopy > 100) {
            tmp = 0;
            
            while (ncopy >= 10) {
                if (ncopy == 10) {
                    tmp += 1;
                    break;
                }
                tmp += (ncopy % 10) * (ncopy % 10);
                ncopy /= 10;
            }

            if (ncopy < 10) {
                tmp += ncopy * ncopy;
            }

            ncopy = tmp;
        }
        
        if (ncopy > 79) {
            tmp = ncopy % 10 * 10 + ncopy / 10;
        }

        // These are the happy numbers in 1~100
        if (tmp == 1 || tmp == 7 || tmp == 10 || tmp == 13 || tmp == 19 
            || tmp == 23 || tmp == 28 || tmp == 31 || tmp == 32 
            || tmp == 44 || tmp == 49 || tmp == 68 || tmp == 70 || tmp == 79) 
            return true;
        else 
            return false;
    }
};