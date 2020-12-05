void printPostorder(Node *root, vector <int> &vec)
{
    if(root==NULL)
    return ;
    printPostorder(root->left,vec);
    printPostorder(root->right,vec);
    cout<<root->data<<" ";
}
vector <int> postOrder(Node* root)
{
  vector <int> vec;
  printPostorder(root,vec);
  return vec;
}