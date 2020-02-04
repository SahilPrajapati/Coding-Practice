class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int globalSum = nums[0];
        int currSum   = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            currSum = max(nums[i], nums[i] + currSum);
            
            if(currSum > globalSum)
                globalSum = currSum;
        }
        
        return globalSum;
    }
};
