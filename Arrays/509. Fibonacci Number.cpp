class Solution {
public:
    int fib(int n) {
        if(n == 0 || n == 1)
            return n;
        
        //return fib(n-1) + fib(n-2);
        int tmp1 = 0;
        int tmp2 = 1;
        for (int i = 1; i < n; i++) 
        {
            int tmp = tmp1+tmp2;
            tmp1 = tmp2;
            tmp2 = tmp;
        }
        return tmp2;    
    }
    
};
