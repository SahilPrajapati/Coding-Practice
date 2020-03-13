class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        map<int, int> count;
        map<int, int> right;
        map<int, int> left ;
        int maxCount = 0;
        int minLen   = INT_MAX;
        
        for(int i = 0; i < nums.size(); i++)
        {
            right[nums[i]] = i;
            if(left.find(nums[i]) == left.end())
            {
                left[nums[i]] = i;
            }
            
            count[nums[i]]++;
            
            if(maxCount < count[nums[i]])
                maxCount = count[nums[i]];
                
        }    
        
        for(int i = 0; i < nums.size(); i++)
        {
            if( (count[nums[i]] == maxCount) && (minLen > right[nums[i]] - left[nums[i]]) )
                minLen = right[nums[i]] - left[nums[i]];
        }
        
        return minLen + 1;
    }
};
