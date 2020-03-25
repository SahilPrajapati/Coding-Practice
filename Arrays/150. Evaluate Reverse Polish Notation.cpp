class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> Stack;

        for(string token : tokens)
        {
            if(token != "+" && token != "-" && token != "*" && token != "/")
                Stack.push(stoi(token));
            else
            {
                int n1 = Stack.top();
                Stack.pop();
                int n2 = Stack.top();
                Stack.pop();
                
                if(token == "+")
                    Stack.push(n2 + n1);
                        
                else if(token == "-")
                    Stack.push(n2 - n1);
                        
                else if(token == "*")
                    Stack.push(n2 * n1);
                    
                else
                    Stack.push(n2 / n1);
            }
        }
        
        return Stack.top();
        
    }
};
