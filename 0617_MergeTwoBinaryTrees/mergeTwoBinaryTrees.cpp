class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1 == NULL) return t2;
        if(t2 == NULL) return t1;
    
        TreeNode* resNode = new TreeNode(0);
        resNode->val = t1->val + t2->val;
        
        resNode->left = mergeTrees(t1->left, t2->left);
        resNode->right = mergeTrees(t1->right, t2->right);
        
        return resNode;
    }
};