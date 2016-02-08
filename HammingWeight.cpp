class Solution {
public:
    int hammingWeight(uint32_t n) {
		unsigned int c =0 ; //
		while (n >0)
		{
			if((n & 1) == 1) // correct bit is 1
            ++c;
			n >>= 1 ; // right move
		}
		return c ;
    }
};