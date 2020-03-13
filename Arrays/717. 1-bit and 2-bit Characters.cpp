class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        if(bits.size() == 1) return true;
        int i = 0;
        
        while(i < bits.size())
        {
            if(bits[i] == 1) i += 2;
            
            else if(bits[i] == 0) i++;
            
            if(i == bits.size() - 1) return true;
            else if(i >= bits.size()) return false;
        }
        
        return false;
        
    }
};
