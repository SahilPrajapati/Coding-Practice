class Solution {
public:
    void LCS(vector<string>& result, string str, int index)
    {
        result.push_back(str);
        
        for(int i = index; i < str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                if(isupper(str[i]))
                {
                    str[i] = str[i] - 'A' + 'a';
                    LCS(result, str, i + 1);
                    str[i] = str[i] - 'a' + 'A';
                }
                
                else if(islower(str[i]))
                {
                    str[i] = str[i] - 'a' + 'A';
                    LCS(result, str, i + 1);
                    str[i] = str[i] - 'A' + 'a';
                }
            }
        }
    }
    
    vector<string> letterCasePermutation(string S) {
        vector<string> result;
        
        LCS(result, S, 0);
        
        return result;
    }
};
