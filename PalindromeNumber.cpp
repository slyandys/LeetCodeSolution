class Solution {
public:
    bool isPalindrome(int x) {
        std::string ckPalindrome = std::to_string(x);
        int i, j;
        
		// Only need to compare half of the size
        for (i = 0, j = ckPalindrome.size()-1; i <= ckPalindrome.size() / 2 + 1; i++, j--) {
            if (ckPalindrome[i] == '-') {
                return false;
            }
            
            if (ckPalindrome[i] == '+') {
                i++;
            }
            
            if (ckPalindrome[i] != ckPalindrome[j]) {
                return false;
            }
        }
        
        return true;
    }
};