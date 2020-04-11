class Solution {
public:
    string frequencySort(string s) {
        
        map<char, int> hMap;
        vector<pair<int,char>> pq;
        
        for(int i = 0; i < s.length(); i++)
            hMap[s[i]]++;
        
        for(auto entry : hMap)
            pq.push_back(make_pair(entry.second, entry.first));
        
        make_heap(pq.begin(), pq.end());
        
        string result = "";
        while(!pq.empty())
        {
            int n = pq.back().first;
            char c = pq.back().second;
            while(n--)
                result += c;
            pq.pop_back();
        }
        
        return result;
    }
};
