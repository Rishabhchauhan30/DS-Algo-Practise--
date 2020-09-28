void mirror(Node* node) 
{
    Node *t;
    if(node==NULL)
    return;
    
    if(node!=NULL)
    {
        mirror(node->left);
        mirror(node->right);
        t = node->left;
        node->left = node->right;
        node->right = t;
    }
}