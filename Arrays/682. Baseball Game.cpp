class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        int result = 0;
        stack<string> Stack;
        
        for(int i = 0; i < ops.size(); i++)
        {
            if(ops[i] == "D")
            {
                Stack.push(to_string(2 * stoi(Stack.top())));
            }
            else if(ops[i] == "C")
            {
                Stack.pop();
            }
            else if(ops[i] == "+")
            {
                string s1 = Stack.top();
                Stack.pop();
                
                string s2 = Stack.top();
                Stack.pop();
                
                string s3 = to_string(stoi(s1) + stoi(s2));
                
                Stack.push(s2);
                Stack.push(s1);
                Stack.push(s3);
            }
            else
            {
                Stack.push(ops[i]);
            }
            
        }
        
        while(!Stack.empty())
        {
            result += stoi(Stack.top());
            Stack.pop();
        }
        
        return result;
        
    }
};
