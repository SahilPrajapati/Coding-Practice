class Solution {
public:
    int minAddToMakeValid(string S) {
        
        int count = 0;
        stack<char> Stack;
        
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == '(')
                Stack.push('(');
            else
                count = (Stack.empty()) ? (count + 1) : (Stack.pop(), count);
        }
        
        count += Stack.size();
        
        return count;
    }
};
