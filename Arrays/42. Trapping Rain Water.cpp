// An Efficient Solution is to pre-compute highest bar on left and right of every bar in O(n) time. 
// Then use these pre-computed values to find the amount of water in every array element. 

class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        if(n < 3) return 0;
        vector<int> leftMax(n, -1); // ith element is the index of Max element in left side of height[i]
        vector<int> rightMax(n, -1); // ith element is the index of Max element in right side of height[i]
        
        int maxLeftIndex = 0; // to store max element to the left of height[i].
        int maxRightIndex = n - 1; // to store max element to the right of height[i].
        
        for(int i = 0; i < n; i++)
        {
            //updating leftMax array
            // if height[i] < height[maxLeftIndex] then we will update the leftMax[i](i.e. the index of left Max element),
            //other wise this element is the maximum element upto index i, so we will update our maxLeftIndex.
            (height[i] < height[maxLeftIndex]) ? (leftMax[i] = maxLeftIndex) : (maxLeftIndex = i);
            
            //updating rightMax array in the same way
            (height[n - 1 - i] < height[maxRightIndex]) ? (rightMax[n - 1 - i] = maxRightIndex) : (maxRightIndex = n - 1 - i);
        }
    

        //An element of the array can store water if there are higher bars on left and right.
        //We can find the amount of water to be stored in every element by finding the heights of bars on left and right sides
        //So, we will add min(height[leftMax[i]], height[rightMax[i]]) - height[i].
        int sum = 0;
        for(int i = 0; i < height.size(); i++)
        {
            if(leftMax[i] != -1 && rightMax[i] != -1)
            sum += min(height[leftMax[i]], height[rightMax[i]]) - height[i];
        }
        
        return sum;
    }
};
