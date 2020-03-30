class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int> Stack1;
        string result = "";
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                Stack1.push(i);
            
            else if(s[i] == ')')
            {
                if(Stack1.empty()) continue;
                Stack1.pop();
            }
            result.push_back(s[i]);
        }
        
        int n = s.size() - result.size();
        while(!Stack1.empty())
        {
            result.erase(result.begin() + Stack1.top() - n);
            Stack1.pop();
        }
        
        return result;
        
    }
};
