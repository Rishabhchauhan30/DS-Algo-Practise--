Recursive
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(!root) return NULL;
        if(val == root->val) 
            return root;
        if(root->val > val)
            return searchBST(root->left,val);
        else //if(root->val < val)
            return searchBST(root->right,val);
    }
};


Iterative

class Solution {
    public TreeNode searchBST(TreeNode root, int val) {
        while (root != null && root.val != val) // run while loop until root null or we found root.val == val
            root = val < root.val ? root.left : root.right;
        return root;
    }
}   