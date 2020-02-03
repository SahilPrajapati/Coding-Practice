

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        map<string, int> a;
        vector<string> result;
        if(s == "")
            return result;
        for(int i = 0; i + 9 < s.length(); i++)
        {
            string substring = s.substr(i , 10);
            a[substring]++;
            
            if(a[substring] == 2)
                result.push_back(substring);
        }

        
        return result;
        
    }
};
