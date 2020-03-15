class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int m = A.size();
        int n = A[0].size();
        vector<vector<int>>result(m, vector<int>(n) );
        
        for(int i = 0; i < m; i++)
        {
            for(int l = 0; l < n; l++)
                result[i][n - 1 - l] = (A[i][l] == 0) ? 1 : 0 ;
        }
        
        return result;
        
    }
};
