class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int length = nums.size();
        vector<int> result{};
        
        /*
        basically hum isme kr kya rhe hai... since according to the input the range will be equal to
        the size of the array so humne hr element ko as an index treat kia and us index pr humne
        element ko negative kr dia only for first time agli baar jab same element aayga or us index
        pr jb hum jayenge to vo already negative h so it will never go to the condition to change 
        the sign again.... Now ab kya hoga jo jo element present h array me uske index element to 
        negative ho jayenge or jo nhi h us index k element positive rhenge so those indexes will be
        our answer....
        */
        
        for(int i = 0; i < length; i++)
        {
            if(nums[abs(nums[i]) - 1] > 0 )
                nums[abs(nums[i]) - 1] *= -1;
        }
        
        for(int num : nums)
            cout<<num<<" ";
        
        for(int i = 0; i < length; i++)
        {
            if(nums[i] > 0)
                result.push_back(i + 1);
        }
        
        return result;
    }
};
