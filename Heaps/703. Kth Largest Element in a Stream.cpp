class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) : kth(k), q(nums.begin(), nums.end()) { while (q.size() > kth) q.pop();}
    
    int add(int val) {
        q.push(val);
        
        if(q.size() > kth)
        q.pop();
        return q.top();
    }
private:
    int kth;
    priority_queue<int, vector<int>, greater<int>> q;
};
