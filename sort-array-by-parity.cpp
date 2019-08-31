class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int j=A.size()-1;
        int temp;
        for(int i=0;i<=j;i++)
        {
            if(A[i]!=0 && A[i]%2!=0)
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                
                j--;
            }
        }
        return A;
        
    }
};
