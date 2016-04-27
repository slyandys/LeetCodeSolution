class Solution {
public:
    string reverseVowels(string s) {
        int i;
        
        string r;
        
        int n = s.size();
        vector<int> vec;
        for(i = 0; i < n; i++){
            if (s[i] == 'a' ||  s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                s[i] == 'A' ||  s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vec.push_back(i);
            }
        }
        
        n = vec.size();
        
        for(i = 0; i < n/2; i++) {
            std::swap(s[vec[i]], s[vec[n - i - 1]]);
        }
        
        return s;
    }
};