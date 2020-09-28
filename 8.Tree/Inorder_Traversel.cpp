void printInorder(Node *root, vector <int> &vec)
{
    if(root==NULL)
    return;
    printInorder(root->left,vec);
    vec.push_back(root->data);
    printInorder(root->right,vec);
}

vector<int> inOrder(Node* root)
{
  vector <int> vec;
  printInorder(root,vec);
  return vec;
}
