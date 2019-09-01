class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n=nums.size();
        
        int index,max=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(max<nums[i])
            { 
                max=nums[i];
                index=i;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(i!=index && max<(nums[i]*2))
            { index=-1;
              break;
            }
        }
        return index;
    }
};
