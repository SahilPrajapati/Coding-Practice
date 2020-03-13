class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 0 || n == 1) return n;
        
        int maxLen = 0;
        int count = 1;
        
        for(int i = 0; i < n - 1; i++)
        {
            count = (nums[i] < nums[i + 1]) ? count + 1 : 1;
            if(maxLen < count) maxLen = count;
        }
        
        return maxLen;
    }
};
