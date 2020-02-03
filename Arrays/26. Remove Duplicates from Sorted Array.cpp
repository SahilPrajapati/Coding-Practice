class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() <= 1)
            return nums.size();
        
        int j = 1;
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i-1])
            {
                nums[j] = nums[i];
                j++;
        
            }
        }
        
        return j;
        
        //BRUTE FORCE
        /*
        if(!nums.size())
            return 0;
        
        int i = 0;
        
        while(i != (nums.size() - 1))
        {
            if(nums[i] == nums[i+1])
                nums.erase(nums.begin() + i+1);
            else
                i++;
        }
        
        return nums.size();
        */
        
        
    }
};
