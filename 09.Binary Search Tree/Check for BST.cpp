// return true if the given tree is a BST, else return false
bool check(Node *root, int MIN, int MAX)
{
    if(!root) return true;
    if(root->data > MIN && root->data < MAX)
        return (check(root->left,MIN,root->data) && check(root->right,root->data,MAX));
    return false;
}
bool isBST(Node* root)
{
    if(!root) return true;
    if (check(root->left,INT_MIN,root->data) && check(root->right,root->data,INT_MAX))
        return true;
    return false;
}
//Time Complexity: O(n)
//Auxiliary Space : O(1) if Function Call Stack size is not considered, otherwise O(n)

/*
APPROACH-2(Using In-Order Traversal)
1) Do In-Order Traversal of the given tree and store the result in a temp array.
3) Check if the temp array is sorted in ascending order, if it is, then the tree is BST.

Time Complexity: O(n)
*/


