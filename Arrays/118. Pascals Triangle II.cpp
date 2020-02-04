class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> x{};
        x.push_back(vector<int>{1});
        x.push_back(vector<int>{1,1});
        
        if(rowIndex == 0 || rowIndex == 1)
            
            return x[rowIndex];
        
    
        for(int i = 2; i <= rowIndex; i++)
        {
            vector<int> temp{1};
            
            for(int j = 0; j <  i-1; j++)
            {
                
                temp.push_back(x[i-1][j] + x[i-1][j+1]);
            }
            
            temp.push_back(1);
            
            x.push_back(temp);
        }
        
        return x[rowIndex];
        
    }
};
