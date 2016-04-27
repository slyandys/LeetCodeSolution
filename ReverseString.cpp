class Solution {
public:
    string reverseString(string s) {
        int n = s.size() - 1;
        string r;
        
        while(n >= 0){
            r += s[n];
            n--;
        }
        return r;
    }
};