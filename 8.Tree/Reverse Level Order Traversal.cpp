vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
    
    if(root==NULL)
    return v;
    
    queue<Node *> q;
    q.push(root);
    stack<Node *> s;
    while(!q.empty())
    {
        int p = q.size();
        for(int i=0; i<p; i++)
        {
            Node *temp = q.front();
            q.pop();
            s.push(temp);
            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
        }
    }
    while(!s.empty())
    {
        v.push_back(s.top()->data);
        s.pop();
    }
    return v;
}