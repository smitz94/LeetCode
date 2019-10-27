class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
        if(root==NULL)
            return root;
        
        stack<TreeNode*> s;
        vector<int> value;
        vector<int> sum;
        int sum_val=0;
        
        TreeNode *curr = root; 
        
        //inorder traversal
        
        while (curr != NULL || s.empty() == false) 
    { 
       
        while (curr !=  NULL) 
        { 
            s.push(curr); 
            curr = curr->left; 
        } 
  
        
        curr = s.top(); 
        s.pop(); 
  
        value.push_back(curr->val); 
        sum_val=sum_val+curr->val;
            
        curr = curr->right; 
  
    } 
        
        sum.push_back(sum_val);
    for(int i=1;i<value.size();i++)
    {
        sum_val= sum_val-value[i-1];
        sum.push_back(sum_val);        
    }
        
        
        // traversing again and re initializing the values to traverse
        int index=0;
        curr = root;
        
        
        while (curr != NULL || s.empty() == false) 
    { 
       
        while (curr !=  NULL) 
        { 
            s.push(curr); 
            curr = curr->left; 
        } 
  
        
        curr = s.top(); 
        s.pop(); 
  
        curr->val=sum[index];
            index++;
            
        curr = curr->right; 
  
    } 
        
        return root;
    }
};
