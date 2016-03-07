class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        
        // num <= 10 case
        if (num < 10) {
            return num;
        } else if (num == 10)
            return 1;
        
        // num > 10 case
        do {
            sum = 0;
            while (num >= 10) {
                sum += num % 10;
                num = num / 10;
            }
            sum += num;
            num = sum;
        } while (sum >= 10);
        
        return num;
    }
};