class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        
        if(A.size() <= 2) return false;
        int left = -1;
        int right = -1;
        
        
        for(int i = 0; i < A.size() - 1; i++)
        {
            if(A[i] > A[i + 1]) 
            {
                left = i;
                break;
            }
            else if(A[i] == A[i + 1]) return false;
        }
        
        for(int i = A.size() - 1; i > 0; i--)
        {
            if(A[i] > A[i - 1]) 
            {
                right = i;
                break;
            }
            else if(A[i] == A[i - 1]) return false;
        }
        return ((left == right) || (left + 1 == right));
        
    }
};
