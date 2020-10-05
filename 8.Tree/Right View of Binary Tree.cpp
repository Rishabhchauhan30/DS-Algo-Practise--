vector<int> rightView(Node *root)
{
   vector<int> v;
   queue<Node *> q;
   q.push(root);
   stack<int> s;
   int level = 1;
   int p = 0;
   
   if(root==NULL)
   return v;
   
   while(!q.empty())
   {
       p = q.size();
       for(int i=0; i<p; i++)
       {
           Node *temp = q.front();
           q.pop();
           s.push(temp->data);
           
           if(temp->left)
               q.push(temp->left);
           
           if(temp->right)
               q.push(temp->right);
       } 
       v.push_back(s.top());
       while(!s.empty())
           s.pop();

       level++;
   }
   return v;
}
