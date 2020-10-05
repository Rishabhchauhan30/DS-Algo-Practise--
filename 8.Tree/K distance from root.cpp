vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> v;
  queue<Node *> q;
  q.push(root);
  int level = 0;
  int p = 0;
  
  if(root==NULL)
  return v;
  
  if(k==0)
  {
      v.push_back(root->data);
      return v;
  }
  
  while(!q.empty())
  {
    p = q.size();
    for(int i=0; i<p; i++)
    {
        Node *temp = q.front();
        q.pop();
        
        if(temp->left)
           q.push(temp->left); 
           
        if(temp->right)
            q.push(temp->right);
            
        if(level==k)
            v.push_back(temp->data);
    }
    level++;
  }
  return v;
}
