class Solution {
public:
    int reverse(int x) {
        std::string s = std::to_string(x);
        char chr;
        
        if (s.size() > 10 && x > 0) {
            return 0;
        }
        
        if (x <= INT_MIN || x >= INT_MAX) {
            return 0;
        }
        
        for (int i = 0; i < s.size() / 2; i++) {
            chr = s[i];
            s[i] = s[s.size() - 1 - i];
            s[s.size() - 1 - i] = chr;
        }
        
        long result = std::stol(s.c_str());
        
        if (result > INT_MAX)
            return 0;
        
        return x>0 ? result : (-1)*result;
    }
};