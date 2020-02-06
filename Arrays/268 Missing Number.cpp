class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0)
            return 0;
        int number = 0;
        
        for(int i = 0; i < n; i++)
        {
            number ^= (i + 1) ^ nums[i]; 
        }
        
        return number;
        
    }
};
