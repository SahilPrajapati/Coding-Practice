#include<math.h>
class Solution {
public:
    bool isHappy(int n) {
       int i = 0;
        vector<int> bin;
        bin.push_back(n);
      while(n != 1)
      {
          int temp = 0;

          while(n > 0)
          {
             temp += pow(n % 10, 2);
              n /= 10;
          }

          if(find(bin.begin(), bin.end(), temp) == bin.end())
              bin.push_back(temp);

          else
              return false;



          n = temp;

      }

        return true;
    }
};
