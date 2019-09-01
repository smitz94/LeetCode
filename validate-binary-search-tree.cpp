class Solution {
public:
    bool isValidBST(TreeNode* root) {
        
       if(root==NULL)
       {
           return true;
       }
        
        stack<TreeNode*> s;
        
        TreeNode* temp;
        vector<int> a;
        temp=root;
        while(temp!= NULL || s.empty()==false)
        {
           while(temp!=nullptr)
           {    
               s.push(temp);
               temp=temp->left;
               
           }
            temp=s.top();
            s.pop();
            
            a.push_back(temp->val);
            
            temp=temp->right;
            
        }
        
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]>=a[i+1])
                return false;
        }
        
        return true;
    }
};
