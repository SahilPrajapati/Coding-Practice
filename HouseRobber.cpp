class Solution {
public:
    int rob(vector<int>& nums) {


        if(accumulate(nums.begin(), nums.end(), 0) == 0)
            return 0;

        vector<int> m(nums.size(), 0);

        return sum(nums, nums.size() - 1, m);

    }

    int sum(vector<int>& nums, int n, vector<int>& m)
    {
        if(n < 0)
            return 0;
        else if(m[n] != 0)
            return m[n];

        else
            m[n] =  max(nums[n] + sum(nums, n - 2, m), sum(nums, n - 1, m));

        return m[n];
    }
};
