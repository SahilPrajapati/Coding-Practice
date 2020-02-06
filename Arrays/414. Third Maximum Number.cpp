class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = LONG_MIN;
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;
        
        for(auto it = nums.begin(); it != nums.end(); it++)
        {
            if(*it > max1)
            {
                
                max3 = max2;
                max2 = max1;
                max1 = *it;
            }
            
            else if(*it == max1)
                continue;
            
            else if(*it > max2)
            {
                max3 = max2;
                max2 = *it;
            }
            
            else if(*it == max2)
                continue;
            
            else if(*it > max3)
                max3 = *it;
            
        }
        cout<<INT_MIN;
        return (max3 == LONG_MIN) ? (int)max1 : (int)max3;
        
    }
};
