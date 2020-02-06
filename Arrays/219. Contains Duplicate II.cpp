class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        map<int, int>hMap;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if((hMap.find(nums[i]) == hMap.end()) || (i - hMap.find(nums[i])->second > k))
                hMap[nums[i]] = i;
            
            else if(i - hMap.find(nums[i])->second <= k)
                return true;
                
        }
        
        return false;
        
    }
};
