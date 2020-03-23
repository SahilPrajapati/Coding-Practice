class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> result(A.size(), 0);
        int evenPlace = 0;
        int oddPlace  = 1;
        
        for(int a : A)
            (a % 2 == 0) ? (result[evenPlace] = a, evenPlace += 2) : (result[oddPlace] = a, oddPlace += 2) ;
        
        return result;
    }
};
