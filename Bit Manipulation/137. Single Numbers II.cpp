#include<iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int res = 0;
        
        for(int i = 0; i < 32; i++)
        {
            int mask = 1 << i;
            int count = 0;
            for(int j = 0; j < nums.size(); j++)
            {
               if(mask & nums[j])
                   count ++;
            }
            
            if(count % 3)
                res = res | (1 << i);
            
        }
        
        return res;
        
        
        // ANOTHER SOLUTION
        /*
        map<int, int> a;
        
        for(int i = 0; i < nums.size(); i++)
        {
            a[nums[i]]++;
        }
        
        for(map<int, int>::iterator itr = a.begin(); itr != a.end(); itr++)
        {
            if(itr->second == 1)
                return itr->first;
        }*/
        
        //return 0;
        
        //ONE MORE
        /*sort(nums.begin(), nums.end());
        
        if(nums.size() == 1)
            return nums[0];
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(nums[i] == nums[i + 2])
                i += 2;
                
            else 
                return nums[i];
        }
        
        return nums.back();*/
    }
};
