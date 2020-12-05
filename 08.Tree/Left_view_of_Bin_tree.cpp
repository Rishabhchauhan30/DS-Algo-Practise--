void printLeftView(bool *levels,Node *root, int curr)
{
    if(root==NULL)
    return;
    
    if(levels[curr]==false) //if that level is visitef first time 
    {
        levels[curr] = true; //and change the value from false to true 
        cout<<root->data<<" ";
    }
    printLeftView(levels,root->left,curr+1);
    printLeftView(levels,root->right,curr+1);
    
}

void leftView(Node *root)
{
   //Assume that the max height of tree is to be 100
   //so the maximum levels for tree will be 100
   
   bool levels[202] = {false}; //initalize array with initial values false 
   printLeftView(levels,root,0);
}