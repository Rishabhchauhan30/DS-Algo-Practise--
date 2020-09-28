int sum(Node *node)
{
    int x,y;
    if(node==NULL)
        return 0;
        
    if(node!=NULL)
    {
        x = sum(node->left);
        y = sum(node->right);
        return x+y+node->data;
    }
}

bool isSumTree(Node* root)
{
    int lt,rt;
    
    if(root==NULL || (root->left==NULL && root->right==NULL))
    return true;
    
    if(root!=NULL)
    {
        lt = sum(root->left);
        rt = sum(root->right);
    }
    if(lt+rt==root->data)
        return true;
    
    return false;
}