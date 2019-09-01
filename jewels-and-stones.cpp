class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> umap;
        
        for(int i=0;i<S.length();i++)
        {
            umap[S[i]]+=1;
        }
        
        int count=0;
        
        for(int i=0;i<J.length();i++)
        {
            if(umap.find(J[i])!=umap.end())
            {
                count=count+umap[J[i]];
            }
        }
        
        return count;
        
    }
};
