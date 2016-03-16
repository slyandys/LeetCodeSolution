class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vtotal;
        vector<int> velem;
        vector<int> vtmp;
        int constant = 1;
        
        for (int i = 0; i < numRows; i++) {
            vtmp.push_back(constant);
            
            if (i >= 2) {
                for (int j = 1; j <= i - 1; j++) {
                    vtmp.push_back(velem[j] + velem[j - 1]);
                }
            }
            
            if (i >= 1) {
                vtmp.push_back(constant);
            }
            
            velem = vtmp;
            vtmp.clear();
            vtotal.push_back(velem);
        }
        
        return vtotal;
    }
};