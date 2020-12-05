int getMaxWidth(Node* root)
{
    if(root==NULL) return 0;
    
    queue<Node *> q;
    q.push(root);
    //stack<Node *> s;
    int width = 0;
    while(!q.empty())
    {
        int p = q.size();
        width = max(width,p);
        for(int i=0; i<p; i++)
        {
            Node *temp = q.front(); q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
    return width;
}
