class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int length=nums.size();
        
        int L[length];
        int R[length];
        
        vector<int> answer;
        
        L[0] = 1;
        for (int i = 1; i < length; i++) {
            
            L[i] = nums[i - 1] * L[i - 1];
        }

        R[length - 1] = 1;
        for (int i = length - 2; i >= 0; i--) {
            
            R[i] = nums[i + 1] * R[i + 1];
        }

        
        for (int i = 0; i < length; i++) {
            answer.push_back(L[i] * R[i]);
        }

        return answer; 
        
        
    }
};
