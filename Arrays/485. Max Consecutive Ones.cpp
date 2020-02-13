class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int currMax   = 0;
        int globalMax = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                currMax++;
                if(globalMax < currMax)
                    globalMax = currMax;
            }
            
            else
                currMax = 0;
        }
        
        return globalMax;
    }
};
