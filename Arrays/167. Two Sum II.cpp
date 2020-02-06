#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int ptr1 = 0;
        int ptr2 = numbers.size() - 1;
        
        while(numbers[ptr1] + numbers[ptr2] != target)
        {
            if(numbers[ptr1] + numbers[ptr2] > target)
                ptr2--;
            
            else
                ptr1++;
        }
        
        return vector<int>{ptr1+1, ptr2+1};
        
        
    }
    
};
