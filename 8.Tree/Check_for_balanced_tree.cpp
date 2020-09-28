int check(Node *root,bool &balanced)
{
    if(root == NULL) return 0;
    
    int lh = check(root->left,balanced);
    int rh = check(root->right,balanced);
    
    if(abs(lh-rh) > 1) balanced = false;
    return (lh > rh ? lh:rh)+1;
}

bool isBalanced(Node *root)
{
    bool balanced = true;
    check(root,balanced);
    return balanced;
}