#include<iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();
        int partition = nums.size() - k;
        
        reverse(nums.begin(), nums.begin() + partition);
        reverse(nums.begin()  + partition, nums.end());
        reverse(nums.begin(), nums.end());
        
        //BRUTE FORCE -- TLE
        /*
        if(!nums.size())
            return ;
        
        k = k % nums.size();
        
        
        for(int i = 0; i < k; i++)
        {
            int temp = nums.back();
            for(int j = nums.size() - 1; j > 0 ; j--)
            {
                nums[j] = nums[j-1];                
            }
            
            nums[0] = temp;
        }*/
        
        
        //delete from last insert at begining
        /*
        for(int i = 0; i < k; i++)
        {
            
            nums.insert(nums.begin(), nums.back());
            
            nums.pop_back();
                
        }*/
    }
};
