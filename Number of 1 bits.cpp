class Solution {
public:
    int hammingWeight(uint32_t n) {

        vector<int> bin;

        int count = 0;
        while(n > 0)
        {
            if(n % 2 == 1)
                count++;

            n /= 2;
        }


        return count;
    }
};
