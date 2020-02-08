class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t rev = 0;
        
        for(int i = 0; i < 32; i++)
        {
            int b1 = n & 1;
            
            rev |= (b1 << (31 - i));
            
            n = n >> 1;
        }
        
        return rev;
    }
};
