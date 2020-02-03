class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int temp = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            temp ^= nums[i];
        }
        
        return temp;
        
    }
};
