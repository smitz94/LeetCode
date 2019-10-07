class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) 
            return 0;
        
        queue<Node*> q; 
        q.push(root);
        
        int depth = 0;
        
        while (!q.empty()) {
            depth += 1;
            int breadth = q.size();
            for (int i = 0; i < breadth; i++) 
            {
                auto node = q.front(); 
                q.pop();
                
                for (auto child : node->children) 
                {
                    if (child) 
                        q.push(child);
                }
            }
        }
        return depth;
    }
};
