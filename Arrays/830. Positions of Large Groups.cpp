class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        
        vector<vector<int>> result;
        int l = 0;
        int r = 0;
        int count = 0;
        char prev = S[0];
        
        for(int i = 0; i < S.length(); i++)
        {
            if(prev == S[i])
            {
                count++;
            }
            
            else if(prev != S[i])
            {
                prev = S[i];
                if(count > 2) result.push_back({l, i-1});
                count = 1;
                l = i;
                
            }
        }
        
        if(count > 2) result.push_back({l, S.length() - 1});
        
        return result;
        
    }
};
