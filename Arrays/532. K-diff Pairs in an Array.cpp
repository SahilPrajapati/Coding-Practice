class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if( k < 0 or nums.size() <= 1 ) return 0 ;
        sort( nums.begin(), nums.end() ) ;
        int a, n = nums.size(), i = 0, j = 1, ans = 0 ;
        while( i < n and j < n ){
            a = abs( nums[i] - nums[j] ) ;
            if( a > k )
                i++ ;
            else if( a < k )
                j++ ;
            else{
                ans++ ;
                i++, j++ ;
                while( i < n and nums[i] == nums[i-1] ) i++ ;
                while( j < n and nums[j] == nums[j-1] ) j++ ;
            }
            if( i == j ) j++ ;
        }
        return ans ;
    }
};
