#include<iostream>
#include<math.h>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {

        int count = 0;

        for(int i = 2; i < n; i++)
        {
            if(checkPrime(i))
                count++;
        }

        return count;

    }

    bool checkPrime(int n)
    {
        if(n <= 1)
            return false;
        else if(n == 2)
            return true;

        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
                return false;
        }

        return true;
    }
};
