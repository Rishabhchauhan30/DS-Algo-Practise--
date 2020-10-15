
/* Diagonal Traversal of Binary Tree
Consider lines of slope -1 passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.

USING HASHING APPROACH
The idea is to use map. We use different slope distances and use them as key in map.
Value in map is vector (or dynamic array) of nodes. We traverse the tree to store values in map. 
Once map is built, we print contents of it
*/
void diagonalPrint(Node *root)
{
    map<int,vector<Node *> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty())
    {
        m[q.front().second] = q.front().first;

        if(q.front().first->left)
            q.push({q.front().first->left,q.front().second+1})

        if(q.front().first->right)
            q.push({q.front().first->right,q.front().second})
        
        q.pop();
    }
    for(auto i:m)
        cout<<i.second->data<<" ";
}

/* 
ITERATIVE APPROACH

The idea is to use a queue to store only the left child of current node. 
After printing the data of current node make the current node to its right child, if present.
A delimiter NULL is used to mark the starting of next diagonal
*/

