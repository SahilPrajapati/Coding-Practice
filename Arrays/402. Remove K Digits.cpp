class Solution {
public:
  string removeKdigits(string num, int k) {
    string res;
    int kinit = k;

    if (k >= num.size()) return "0";

    for (char c : num) {
      while(k>0 && !res.empty() && res.back() > c) {
        res.pop_back();
        k--;
      }
      if (!(res.empty() && c == '0')) res.push_back(c);
    }
      
     while(k > 0)
     {
         res.pop_back();
         k--;
     }

    return res.empty() ? "0" : res;
  }
};
