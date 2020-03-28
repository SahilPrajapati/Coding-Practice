class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        
        //SOLUTION 2
        vector<int> result(T.size(), 0);
        
        if(T.size() == 0) return result;
        
        stack<int> Stack;
        
        Stack.push(T.size() - 1);
        
        for(int i = T.size() - 2; i >= 0; i--)
        {
            while(!Stack.empty() && T[Stack.top()] <= T[i])
                Stack.pop();
            
             if(!Stack.empty() && T[Stack.top()] > T[i]) 
                result[i] = Stack.top() - i;
            
            Stack.push(i);
            
        }
        return result;
        
        
        
        //SOLUTION 1
        /*
        vector<int> result(T.size(), 0);
        
        for(int i = 0; i < T.size() - 1; i++)
        {
            int count = 1;
            for(int j = i + 1; j < T.size(); j++)
            {
                if(T[i] >= T[j])
                    count++;
                else break;
                
                if(j == T.size() - 1) count = 0;
            }
            
            result[i] = count;
        }
        
        return result;
        */
    }
};
