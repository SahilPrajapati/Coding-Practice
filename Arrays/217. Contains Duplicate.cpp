class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //USING HASHMAP
        std::unordered_map<int, int> ma;
    
        for(const auto &el: n)
        {
            ma[el]++;

            if(ma[el] > 1) return true;
        }
    
    return false;
        
        //ONE LINER
        /*
        return (nums.size() != (set<int>(nums.begin(), nums.end()).size()));
        */
        
        //MAKING SET
        /*
        set<int>s;
            
        for(auto it = nums.begin(); it != nums.end(); it++)
        {   
            if(s.find(*it) == s.end())
                s.insert(*it);
            else
                return true;
        }
        return false;
        */
    }
};
