class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        vector<int> ans;
        
        if(A.size()==0)
            return ans;
        
        int n= A.size();
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(A[i]*A[i]);
        }
        
        
        
        return ans;
        
    }
};
