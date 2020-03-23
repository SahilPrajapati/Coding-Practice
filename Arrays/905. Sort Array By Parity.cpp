class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        int left = 0;
        int right = A.size() - 1;
        
        while(left < right)
        {
            while((A[left] % 2) == 0 && (left < right))
                left++;
            
            while((A[right] % 2) == 1 && (left < right))
                right--;
            
            if((left < right))
                swap(A[left], A[right]);
        }
        
        return A;
        
    }
};
