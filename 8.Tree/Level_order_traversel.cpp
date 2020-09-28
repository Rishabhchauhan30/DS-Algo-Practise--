vector<int> levelOrder(Node* node)
{
  //create Empty queue;
  vector <int> vec;
  queue <Node *> que;
  
  //Base condition
  if(node==NULL)
  return vec;
  
  que.push(node);
  
  while(que.empty() == false)
  {
    Node *node = que.front();
    vec.push_back(node->data);
    que.pop();
     
    if(node->left!=NULL)
        que.push(node->left);
    
    if(node->right!=NULL)
        que.push(node->right);
  }
}