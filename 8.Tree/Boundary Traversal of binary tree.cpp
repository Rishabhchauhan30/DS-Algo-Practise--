/*
We break the problem in 3 parts:
1. Print the left boundary in top-down manner.
2. Print all leaf nodes from left to right, which can again be sub-divided into two sub-parts:
___2.1 Print all leaf nodes of left sub-tree from left to right.
___2.2 Print all leaf nodes of right subtree from left to right.
3. Print the right boundary in bottom-up manner.

We need to take care of one thing that nodes are not printed again.
e.g. The left most node is also the leaf node of the tree.

*/
void printLeftBoundary(Node *root, vector<int> &v)
{
    if(root==NULL) return;
    
    if(root->left)
    {
        v.push_back(root->data);
        printLeftBoundary(root->left,v);
    }
    else if(root->right)
    {
        v.push_back(root->data);
        printLeftBoundary(root->right,v);
        
    }
}

void printLeaves(Node *root, vector<int> &v)
{
    if(root==NULL) return;
    
    printLeaves(root->left,v);
    
    if(!(root->left) && !(root->right))
        v.push_back(root->data);
    
    printLeaves(root->right,v);
}

void printRightBoundary(Node *root, vector<int> &v)
{
    if(root==NULL) return;
    
    if(root->right)
    {
        printRightBoundary(root->right,v);
        v.push_back(root->data);
    }
    else if(root->left)
    {
        printRightBoundary(root->left,v);
        v.push_back(root->data);
    }
}

vector <int> printBoundary(Node *root)
{
    vector<int> v;
    if(root==NULL) return v;
    
    v.push_back(root->data);
    
    //we will make three different functions to do this.
    // 1st- to print the left boundary in top-down manner
    printLeftBoundary(root->left,v);
    
    // 2nd- to print the leaf nodes
    printLeaves(root->left,v);
    printLeaves(root->right,v);
    
    // 3rd- to print the right boundary in bottom-up manner
    printRightBoundary(root->right,v);
}