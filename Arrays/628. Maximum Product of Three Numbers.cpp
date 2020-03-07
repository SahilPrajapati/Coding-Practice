class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        return max(nums[0]*nums[1]*nums.back(), nums[n - 3]*nums[n - 2]*nums[n-1]);
        
        
        /*
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                for(int k = j + 1; k < n; k++)
                {
                    if(nums[i] * nums[j] * nums[k] > result)
                        result = nums[i] * nums[j] * nums[k];
                }
            }
        }
        
        return result;*/
        
    }
};
