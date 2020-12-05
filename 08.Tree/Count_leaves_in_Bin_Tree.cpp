int countLeaves(Node* root)
{
    if(root==0)
    return 0;
    
    if(root->left==NULL && root->right==NULL)
    return 1;
    else
    return countLeaves(root->left) + countLeaves(root->right);
}