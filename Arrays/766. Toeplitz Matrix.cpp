class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        map<int, int> hMap;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                //METHOD 1
                
                // if(hMap.find(i - j) == hMap.end())
                //     hMap[i-j] = matrix[i][j];
                // else if(hMap[i-j] != matrix[i][j])
                //     return false;
                
                //METHOD 2
                if(i > 0 && j > 0 && matrix[i][j] != matrix[i - 1][j - 1]) return false;
                    
            }
        }
        return true;
        
    }
};
