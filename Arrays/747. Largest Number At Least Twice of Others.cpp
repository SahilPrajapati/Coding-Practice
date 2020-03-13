class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        if(nums.size() < 2) return 0;
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int idx = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(firstMax < nums[i])
            {
                secondMax = firstMax;
                firstMax = nums[i];
                idx = i;
            }
            else if(secondMax < nums[i]) secondMax = nums[i];
        }
        
        return (firstMax >= 2 * secondMax)? idx : -1;
        
    }
};
