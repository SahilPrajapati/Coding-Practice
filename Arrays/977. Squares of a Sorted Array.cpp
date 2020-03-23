class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        int left = 0;
        int right = A.size() - 1;
        vector<int> result(A.size(), 0);
        
        for(int i = A.size() - 1; i >= 0; i--)
        {
            int leftSquare = A[left] * A[left];
            int rightSquare = A[right] * A[right];
            
            result[i] = (leftSquare > rightSquare) ? (left++, leftSquare) : (right--, rightSquare);
        }
        
        return result;
        
        
//         priority_queue<int, vector<int>,greater<int>> pq;
//         vector<int> result;
        
//         for(int i = 0; i < A.size(); i++)
//             pq.push(A[i]*A[i]);
        
//         while(!pq.empty())
//         {
//             result.push_back(pq.top());
//             pq.pop();
//         }
//         return result;
    }
};
