class KthLargest {
public:
   priority_queue<int, vector<int>, greater<int>> pq; // min heap
    int size;
    KthLargest(int k, vector<int> nums) {
        size=k;
        for(int i=0;i<nums.size();i++) {
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop(); // pop the top so that in the end top is the kth largest
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>size) pq.pop(); // after 1st call every time we add element it will be k+1 so popping 1st element will give kth largest
        return pq.top();
    }
};
