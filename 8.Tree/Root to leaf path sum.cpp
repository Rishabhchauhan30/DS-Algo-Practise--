bool hasPathSum(Node *node, int sum) {
    
    if(node==NULL) return (sum==0);
    else 
    {
        bool ans = 0;
        int RemainSum = sum - node->data;
        if(RemainSum==0 && !node->left && !node->right)
            return 1;
        
        if(node->left)
            ans = ans || hasPathSum(node->left,RemainSum);
        
        if(node->right)
            ans = ans || hasPathSum(node->right,RemainSum);
        
        return ans;
    }
}