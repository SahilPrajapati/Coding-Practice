class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double average = 0.0;
        
        for(int i = 0; i < k; i++)
            average += double(nums[i]) / double(k);
        
        double maxAverage = average;
        
        for(int i = 0; i + k < nums.size(); i++)
        {
            average = average - double(nums[i])/double(k) + double(nums[i + k])/double(k);
            if(maxAverage < average)
                maxAverage = average;
        }
        
        return maxAverage;
    }
};
