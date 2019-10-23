class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ans=0;
        int count=0;
        
        unordered_set <int> s;
        
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        
        for(int i =0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                count=nums[i];
                while(s.find(count)!=s.end())
                {
                    count++;
                }
                
                ans=max(ans,count-nums[i]);
                
            }
        }
        
        return ans;
    }
};
