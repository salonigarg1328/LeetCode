class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minheap;
    int ksize;
    KthLargest(int k, vector<int>& nums) {
        ksize=k;
        for(int val: nums){
            add(val);
        }
    }
    
    int add(int val) {
        minheap.push(val);
        if(minheap.size() > ksize){
            minheap.pop();
        }
        return minheap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */