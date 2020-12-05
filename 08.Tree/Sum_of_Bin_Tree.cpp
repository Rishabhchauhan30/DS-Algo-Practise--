long int sumBT(Node* root)
{
    int x,y;
    if(root==NULL)
    return 0;
    if(root!=NULL)
    {
        x = sumBT(root->left);
        y = sumBT(root->right);
        return x+y+root->key;
    }
    return 0;
}