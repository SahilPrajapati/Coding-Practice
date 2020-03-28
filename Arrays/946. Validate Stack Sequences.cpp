class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int popIndex = 0;
        stack<int> Stack;
        
        for(int i = 0; i < pushed.size(); i++)
        {
            Stack.push(pushed[i]);
            
            while(!Stack.empty() && Stack.top() == popped[popIndex])
            {
                popIndex++;
                Stack.pop();
            }
            
        }
        
        return (Stack.empty());
        
    }
};
