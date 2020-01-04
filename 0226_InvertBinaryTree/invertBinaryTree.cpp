class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        
        TreeNode* pTemp = invertTree(root->left);
        root->left = invertTree(root->right);
        root->right = pTemp;
        return root;
    }
};