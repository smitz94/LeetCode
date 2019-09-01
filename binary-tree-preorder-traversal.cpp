class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> elements;
        if(root==NULL)
            return elements;
        
        stack<TreeNode *> nodestack;
        nodestack.push(root);
        
        while(nodestack.empty()==false)
        {
           TreeNode* node= nodestack.top();
            nodestack.pop();
            elements.push_back(node->val);
            
            if(node->right)
                nodestack.push(node->right);
            if(node->left)
                nodestack.push(node->left);
        }
        
        return elements;
        
    }
};
