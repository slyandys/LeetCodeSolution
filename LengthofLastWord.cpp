class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int pos = s.find_last_of(' ');
        int size = s.size();
        bool wspace = false;
        
        if (pos != size - 1) {
            len = size - pos - 1;
        } else {
            for (int i = pos - 1; i>=0; --i) {
                if (s[i] == ' ') {
                    wspace = true;
                } else {
                    len += 1;
                    wspace = false;
                }
                
                if (wspace == true && len>= 1) {
                    break;
                }
            }
        }

        return len;
    }
};