vector <int> bottomView(Node *root)
{
   // Your Code Here
    vector<int> v;
   if(root==NULL) return v;
   
   map<int,Node*> m;
   m[0] = root;
   
   queue<pair<Node*, int>> q;
   q.push({root,0});
   
   while(!q.empty())
   {
       Node *temp = q.front().first;
       int hd = q.front().second;
       q.pop();
       
       if(temp->left)
       {
          m[hd-1] = temp->left;
          q.push({temp->left,hd-1});
       }
       if(temp->right)
       {
           m[hd+1] = temp->right;
           q.push({temp->right,hd+1});
       }
   }
   for(auto i : m)
   {
       cout<<i.second->data<<" ";
   }
   return v;
}