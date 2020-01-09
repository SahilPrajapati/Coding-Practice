#include<math.h>
class Solution {
public:
	// work outside in (or could do inside out)
    uint32_t reverseBits(uint32_t n) {

        vector<int> bin;

        for(int i = 0; i < 32; i++)
        {
            bin.push_back(n % 2);
            n /= 2;
        }

        uint32_t m = 0;
        cout<<bin.size()<<" ";
        for(int i = 0 ; i < bin.size(); i++)
        {
            if(bin[i] == 1)
                {m += pow(2,bin.size() - 1 - i);
                cout<< i<<" ";
                }

            //cout<<m<<" ";
    }

        return m;
    }
};
