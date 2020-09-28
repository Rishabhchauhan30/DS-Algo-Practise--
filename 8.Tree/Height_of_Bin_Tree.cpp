int height(Node* root)
{
    int x,y;
    if(root==NULL)
    return 0;
    if(root!=NULL)
    {
        x = height(root->left);
        y = height(root->right);
        return max(x,y)+1;
    }
    return 0;
}
