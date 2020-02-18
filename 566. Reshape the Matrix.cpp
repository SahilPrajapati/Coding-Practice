class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        if(nums.size() * nums[0].size() != r*c)
            return nums;
        
        vector<vector<int>> result;
        vector<int> temp;
        for(vector<int> vect : nums)
        {
            for(int num : vect)
            {
                temp.push_back(num);
                
                if(temp.size() == c)
                {
                    result.push_back(temp);
                    temp.clear();
                }
            }
        }
        
        return result;
        
    }
};
