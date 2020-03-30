class Solution {
public:
    string reverseParentheses(string s) {

        //SOLUTION 1
        
//         In this solution, i have stored the index of '(' and as soon as i gets ')' i will reverse
//             the string from index of '(' to i.And After that, extracts the result.
        
        stack<int> Stack;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(') Stack.push(i);
            
            else if(s[i] == ')')
            {
                reverse(s.begin() + Stack.top(), s.begin() + i);
                Stack.pop();
            }
        }
        string result = "";
        
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i])) result.push_back(s[i]);
        }
        return result;
        
        
        //SOLUTION 2
        
    //     In this solution, i am pushing the string until ')' comes, after that, pops the string and
    //         stroed in the queue until,'(' is popped and push again the elements of queue to stack
    //         (now the elments are pushed in reverse order.)
        
        
        /*
        stack<char> Stack;
        queue<char> q;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != ')')
                Stack.push(s[i]);
            else
            {
                while(Stack.top() != '(')
                {
                    q.push(Stack.top());
                    Stack.pop();
                }
                
                Stack.pop();
                while(!q.empty())
                {
                    Stack.push(q.front());
                    q.pop();
                }
            }
            
        }
        
        string result = "";
        while(!Stack.empty())
        {
            result = Stack.top() + result;
            Stack.pop();
        }
        return result;
        */
     }
};





