// after inserting a new Node with value 'Key' into it. 
Node* insert(Node* root, int Key)
{
    // Your code here
    Node *temp = root;
    
    while(1)
    {
        if(temp->data==Key) return root;
        else if(temp->data > Key)
        {
            if(!temp->left)
            {
                temp->left = new Node(Key);
                return root;
            }
            else
                temp = temp->left;
        }
        else if(temp->data < Key)
        {
            if(!temp->right)
            {
                temp->right = new Node(Key);
                return root;
            }
            else
                temp = temp->right;
        }
    }
}
