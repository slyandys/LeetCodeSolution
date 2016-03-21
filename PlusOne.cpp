class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int vsize = digits.size();
        int val = 0;
        int carry = 0;
        vector<int> tmpVec;
        int tmpSize = 0;
        
        val = digits.back();
        
        if (val + 1 == 10) {
            digits.pop_back();
            carry = 1;
            tmpVec.push_back(0);
        
            for (int i = 0;i < vsize - 1; i++) {
                if (digits.back() + carry == 10) {
                    carry = 1;
                    digits.pop_back();
                    tmpVec.push_back(0);
                } else {
                    val = digits.back();
                    digits.pop_back();
                    ++val;
                    digits.push_back(val);
                    carry = 0;
                    break;
                }
            }
            
            tmpSize = tmpVec.size();
            
            if (carry == 1) digits.push_back(1);
            
            while (tmpSize>0) {
                digits.push_back(0);
                --tmpSize;
            }
            
        } else {
            digits.pop_back();
            digits.push_back(++val);
        }
        return digits;
    }
};