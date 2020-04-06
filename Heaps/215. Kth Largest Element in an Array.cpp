class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //SOLUTION 2
        
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k - 1];
        
        
        //SOLUTION 1
        
//         priority_queue<int> pq(nums.begin(), nums.end());
        
//         while(k-- > 1)
//             pq.pop();
        
            
//         return pq.top();
    }
};
