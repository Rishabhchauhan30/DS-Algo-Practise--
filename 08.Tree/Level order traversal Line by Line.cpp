vector<vector<int>> levelOrder(Node* node)
{
    vector<vector<int>> v;
    if(node==NULL) return v;
    queue<Node *> q;
    q.push(node);
    while(!q.empty())
    {
        vector<int>tempi;
        int p = q.size();
        while(p--)
        {
            Node *temp = q.front();
            q.pop();
            tempi.push_back(temp->data);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        // tempi.push_back("$");
        v.push_back(tempi);
    }
    return v;
} 