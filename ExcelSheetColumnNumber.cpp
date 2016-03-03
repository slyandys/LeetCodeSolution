class Solution {
public:
    int titleToNumber(string s) {
        int total = 0;
        int coeff = 1;
        //return s.length();
        for (int i=0;s[i] != '\0';i++) {
			// C++ pow() takes a lot of time
			// http://stackoverflow.com/questions/26860574/pow-implementation-in-cmath-and-efficient-replacement
            // coeff = pow(26, (s.length() - i - 1));
			// Alternative way from David C. Rankin
            coeff = power(26, (s.length() - i - 1));
            total = total + (s[i] - 'A' + 1) * coeff;
        }
        
        return total;
    }
    
    int power (int root, unsigned int idx)
    {
        int temp;
        if (idx == 0)
            return 1;

        temp = power (root, idx / 2);
        if ((idx % 2) == 0)
            return temp * temp;
        else
            return root * temp * temp;
    }
};