class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
        int left = 0;   
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                left = i;
                break;
            }
        }
        int right = left;   
        
        while(right < nums.size() && left <= right)
        {
            while(nums[right] == 0)
            {
                if(right >= (nums.size() - 1))
                 return;
                right++;
            }
            swap(nums[left], nums[right]);
            left++;
        }
        
    }
};
