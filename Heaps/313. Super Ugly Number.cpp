+class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
    
        vector<int>v = {1};
        vector<int> index(primes.size(), 0);
        vector<int> c(primes.size(), 0);
    
        for(int i=1;i<n;i++)
        {
            int num = INT_MAX;
            for(int j = 0; j < primes.size(); j++)
            {
                c[j] = v[index[j]]*primes[j];
                if(num > c[j]) num = c[j];
            }

            v.push_back(num);
            for(int j = 0; j < primes.size(); j++)
                if(num == c[j]) index[j]++;
         
        }  
    return v.back();
    }
};
