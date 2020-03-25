class Solution {
public:
    string decodeString(string s) {
        
        string result = "";
        string temp   = "";
        string itr    = "";
        
        stack<string> Stack;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != ']') 
                Stack.push(string(1,s[i]));
            
            else
            {
                temp = "";
                while(Stack.top() != "[")
                {
                    temp = Stack.top() + temp;
                    Stack.pop();
                }
                Stack.pop();
                
                itr = "";
                while(!Stack.empty() && isdigit((Stack.top())[0]))
                {
                    itr = Stack.top() + itr;
                    Stack.pop();
                }
                
                result = "";
                for(int j = 0; j < stoi(itr); j++)
                    result = temp + result;
                Stack.push(result);
            }
        }
        
        result = "";
        while(!Stack.empty())
        {
            result = Stack.top() + result;
            Stack.pop();
        }
        return result;
    }
};
