class Solution {
public:
    string removeOuterParentheses(string S) {
        
        stack<char> Stack;
        string result = "";
        
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == '(')
            {
                Stack.push('(');
                if(Stack.size() != 1)
                    result += '(';
            }
            else
            {
                if(Stack.size() != 1)
                    result += ')';
                Stack.pop();
            }
            
        }
        
        return result;
        
    }
};
