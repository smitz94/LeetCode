class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int> pq;
        int ans;
        
        if(stones.size()==1)
            return stones[0];
        
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        
        while(pq.size()>1)
        {
            ans=pq.top();
            pq.pop();
            
            if(ans==pq.top())
                pq.pop();
            else
            {
                ans=abs(ans-pq.top());
                pq.pop();
                pq.push(ans);                
            }
        }
        
        if(pq.empty()==true)
            ans=0;
        else
            ans=pq.top();
        
        return ans;
    }
};
