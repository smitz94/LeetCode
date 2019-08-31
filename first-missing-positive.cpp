class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_map<int,int> umap;
        if(nums.size()==0)
            return 1;
	
	for(int i=0;i<nums.size();i++)
	{
		if(nums[i]>0)
		{
			umap[nums[i]]+=1;
		}
	}
	
    int answer=nums.size()+1;
	for(int i=1;i<=nums.size();i++)
	{
		if(umap.find(i)==umap.end())
		{
			answer=i;
            break;
		}
	}
	
	return answer;
        
    }
};
