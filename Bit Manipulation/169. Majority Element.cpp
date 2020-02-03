class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int> counts;
        
        for(int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
            
            if(counts[nums[i]] > nums.size()/2)
                return nums[i];
        }
        
        return 0;
        
        //BIT MANIPULATION SOLUTION
        /*
        int result = 0;
        
        for(int i = 0; i < 32; i++)
        {
            int mask = (1 << i);
            int bitCount = 0;
            
            for(int num : nums)
                if(num & mask)
                    bitCount++;
            
            if(bitCount > nums.size() / 2)
                result |= mask;
        }
        
        return result;*/
    }
};
