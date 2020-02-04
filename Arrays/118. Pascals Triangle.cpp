class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> nums(numRows);
        
        
        for(int i = 0; i < numRows; i++)
        {
            nums[i] = vector<int>(i + 1);
            nums[i][0] = 1;
            nums[i][i] = 1;
        }
        
        for(int i = 2; i < numRows; i++)
        {
            for(int j = 1; j < i; j++)
            {
                nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
            }
        }
        return nums;
    }
};
