class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> elements;
        
        
        int i=0;
        
        queue<TreeNode* > q;
        
        q.push(root);
        
        TreeNode* temp;
        
        while(q.empty()==false)
        {
            
            int size=q.size();
            vector<int> nodes;
            
            while(size--)
            {
            temp=q.front();
            q.pop();
                if(temp!=NULL){
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
            nodes.push_back(temp->val);
            }
            
            
            
            }
            if(nodes.size()!=0)
                elements.push_back(nodes);
            
        }
        
        return elements;
        
    }
};
