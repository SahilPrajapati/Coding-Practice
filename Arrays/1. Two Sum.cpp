class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
    
        // By using Hash Map I sacrifices constant space O(1) for time, as the new space complexity is O(n).
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
       
        // fill thw map with updated index
		// i am recording fresg index only
		// example 2,3,4,2 is my input then i have mp[2]=3 
		// for target=4 my i will be 0 and mp[target-nums[i]] will b 3;
		
        
        for(int i=0;i<nums.size();i++){
            int t=target-nums[i];
            // move forward if map return same index 
			// 6,7,5 target 12
			// i dont want 6 to return twice thats why "mp[t]!=i" ;
            if(mp.find(t)!=mp.end() && mp[t]!=i){
                    return {i,mp[t]};
            }
        }
        return {-1,-1};
    }
};
