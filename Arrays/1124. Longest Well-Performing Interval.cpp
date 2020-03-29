class Solution {
public:
    int longestWPI(vector<int>& hours) {
        
        int prefix  = 0;
        vector<int> pArray(hours.size(), 0);
        int res = 0;
        map<int, int> hMap;
        
        for(int i = 0; i < hours.size(); i++)
        {
            prefix = (hours[i] > 8) ? prefix + 1 : prefix - 1;
            pArray[i] = prefix;
            
            if(hMap.find(prefix) == hMap.end())
                hMap[prefix] = i;
            
            if(prefix > 0)
                res = i + 1;
            
            else if (hMap.find(pArray[i] - 1) != hMap.end())
            res = max(res, i - hMap[pArray[i] - 1]);
                
        }
        cout<<endl;
        for(auto a : hMap)
            cout<<a.first<<" "<<a.second<<endl;
        
        return res;
        /*
        vector<int> flag(hours.size(), 0);
        
        for(int i = 0; i < hours.size(); i++)
        {
            flag[i] = (hours[i] > 8) ? 1 : -1;
            cout<<flag[i]<<" ";
        }
         
        int sum = 0;
        int start = -1;
        int end = -1;
        for(int i = 0; i < hours.size(); i++)
        {
            sum = 0;
            for(int j = i; j < hours.size(); j++)
            {
                sum += flag[j];
                
                if(sum > 0 && (j - i) >= (end - start))
                {
                    cout<<'h';
                    start = i;
                    end = j;
                }
            }
        }
        return (end == -1 && start == -1) ? 0 : (end - start + 1);
        
        */
    }
};
