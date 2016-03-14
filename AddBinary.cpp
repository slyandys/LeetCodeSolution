class Solution {
public:
    string addBinary(string a, string b) {
        // Change to int from binary to decimal
        // then calculate the sum and change it back to binary
        // which is not working if the a and b is more than 32/64 characters
        // int inta = std::stoi(a, nullptr, 2);
        // int intb = std::stoi(b, nullptr, 2);
        // int sum = inta + intb;
        
        // std::string s = std::bitset< 64 >( sum ).to_string();
        // return s;
        
        // Need to come up a solution with a normal way we add digits in real life
        int sizeA = a.size();
        int sizeB = b.size();
        int carry = 0;
        int i = sizeA - 1;
        int j = sizeB - 1;
        
        for (; i >= 0 && j >= 0; i--,j--) {
            // A larger than B
            if (sizeA >= sizeB) {
                if (a[i] == '0' && b[j] == '0' && carry == '0') {
                    a[i] = '0';
                }
                else if (a[i] == '0' && b[j] == '0' && carry == 1) {
                    a[i] = '1';
                    carry = 0;
                }
                else if (a[i] == '0' && b[j] == '1' && carry == 0) {
                    a[i] = '1';
                }
                else if (a[i] == '0' && b[j] == '1' && carry == 1) {
                    a[i] = '0';
                    carry = 1;
                }
                else if (a[i] == '1' && b[j] == '0' && carry == 0) {
                    a[i] = '1';
                }
                else if (a[i] == '1' && b[j] == '0' && carry == 1) {
                    a[i] = '0';
                    carry = 1;
                }
                else if (a[i] == '1' && b[j] == '1' && carry == 0) {
                    a[i] = '0';
                    carry = 1;
                }
                else if (a[i] == '1' && b[j] == '1' && carry == 1) {
                    a[i] = '1';
                    carry = 1;                    
                }
            } 
            // B larger than A
            else {
                if (a[i] == '0' && b[j] == '0' && carry == '0') {
                    b[j] = '0';
                }
                else if (a[i] == '0' && b[j] == '0' && carry == 1) {
                    b[j] = '1';
                    carry = 0;
                }
                else if (a[i] == '0' && b[j] == '1' && carry == 0) {
                    b[j] = '1';
                }
                else if (a[i] == '0' && b[j] == '1' && carry == 1) {
                    b[j] = '0';
                    carry = 1;
                }
                else if (a[i] == '1' && b[j] == '0' && carry == 0) {
                    b[j] = '1';
                }
                else if (a[i] == '1' && b[j] == '0' && carry == 1) {
                    b[j] = '0';
                    carry = 1;
                }
                else if (a[i] == '1' && b[j] == '1' && carry == 0) {
                    b[j] = '0';
                    carry = 1;
                }
                else if (a[i] == '1' && b[j] == '1' && carry == 1) {
                    b[j] = '1';
                    carry = 1;                    
                }
            }
        }
        
        if (i >= 0) {
            while(i >= 0) {
                if (a[i] == '1' && carry == 1) {
                    a[i] = '0';
                    carry = 1;
                } else if (a[i] == '0' && carry == 1) {
                    a[i] = '1';
                    carry = 0;
                }
                i--;
            }
        } else if (j >= 0) {
            while(j >= 0) {
                if (b[j] == '1' && carry == 1) {
                    b[j] = '0';
                    carry = 1;
                } else if (b[j] == '0' && carry == 1) {
                    b[j] = '1';
                    carry = 0;
                }
                j--;
            }
        }
        
        if (sizeA >= sizeB && carry == 1) {
            a.insert(0, "1");
        } else if (sizeA < sizeB && carry == 1) {
            b.insert(0, "1");
        }
        
        return sizeA >= sizeB ? a : b;
    }
};