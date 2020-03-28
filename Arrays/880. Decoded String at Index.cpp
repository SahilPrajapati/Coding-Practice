class Solution {
public:
    string decodeAtIndex(string S, int K) {
        long size = 0;
        int N = S.size();

        // Find size = length of decoded string
        for (int i = 0; i < N; ++i) {
            if (isdigit(S[i]))
                size *= S[i] - '0';
            else
                size++;
        }

        for (int i = N-1; i >=0; --i) {
            K %= size;
            if (K == 0 && isalpha(S[i]))
                return (string) "" + S[i];

            if (isdigit(S[i]))
                size /= S[i] - '0';
            else
                size--;
        }
        
        return "";
    }
};


//Solution 1
/*
class Solution {
public:
    string decodeAtIndex(string S, int K) {
        
        if(S.length() < 1) return "";
        
        int count = 0;
        stack<string> Stack;
        string result = "";
        cout<<result.max_size();
        for(int i = 0; i < S.length(); i++)
        {
            if(isalpha(S[i]))
            {
                Stack.push(string(1, S[i]));
                result += S[i];
                count++;
            }
            else
            {
                int n = S[i] - '0';
                string temp = result;
                count = n * count;
                
                for(int i = 0; i < n - 1; i++)
                {
                    Stack.push(temp);
                    result += temp;
                }
                
            }
            
            
            if(K <= count)
                break;
        }
        
        return string(1, result[K - 1]);
    }
};
*/
