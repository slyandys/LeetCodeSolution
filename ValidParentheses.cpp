class Solution {
public:
    bool isValid(string s) {
        vector<char> sk;
        
        if (s.size() == 1) return false;
        //if (s[0] == ')' || s[0] == ']' || s[0] == '}') return false;
        
        for (int i = 0; s[i] != '\0'; ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                sk.push_back(s[i]);
            } else if (s[i] == ')') {
                if (i != 0 && sk.back() == '(') {
                    sk.pop_back();
                    continue;
                } else {
                    sk.push_back(s[i]);
                }
            } else if (s[i] == ']') {
                if (i != 0 && sk.back() == '[') {
                    sk.pop_back();
                    continue;
                } else {
                    sk.push_back(s[i]);
                }
            } else if (s[i] == '}') {
                if (i != 0 && sk.back() == '{') {
                    sk.pop_back();
                    continue;
                } else {
                    sk.push_back(s[i]);
                }
            }
        }
        
        if (sk.size() == 0){
            return true;
        } else {
            return false;
        }
    }
};