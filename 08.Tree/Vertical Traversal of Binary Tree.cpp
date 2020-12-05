vector<int> verticalOrder(Node *root)
{
    //Your code here
    vector<int> v;
    if(root==NULL)
    return v;
    map<int,vector<int>> m;
    m[0].push_back(root->data);
    
    queue<pair<Node *,int>> q;
    q.push({root,0});
    
    while(!q.empty())
    {
        Node *temp = q.front().first;
        int hd = q.front().second;
        q.pop();
        
        if(temp->left)
        {
            m[hd-1].push_back(temp->left->data);
            q.push({temp->left,hd-1});
        }
        
        if(temp->right)
        {
            m[hd+1].push_back(temp->right->data);
            q.push({temp->right,hd+1});
        }
    }
    map<int, vector<int> >::iterator it; 
    for (it = m.begin(); it != m.end(); it++)
    { 
        for (int i = 0; i < it->second.size(); ++i) 
            v.push_back(it->second[i]); 
        //cout << endl; 
    }
    return v;
}


//Time Complexity of above implementation is O(n Log n). 
//Note that above implementation uses map which is implemented using self-balancing BST.

//We can reduce time complexity to O(n) using unordered_map.
// To print nodes in desired order, we can have 2 variables denoting min and max horizontal distance.
// We can simply iterate from min to max horizontal distance and get corresponding values from Map.
// So it is O(n)

//Auxiliary Space : O(n)

//Approach 1
//https://www.geeksforgeeks.org/print-binary-tree-vertical-order/
//Time complexity of above algorithm is O(w*n) where w is width of Binary Tree and n is number of nodes in Binary Tree.
//In worst case, the value of w can be O(n) (consider a complete tree for example)
//time complexity can become O(n2)

//Approach 2 [Map based Method]
//https://www.geeksforgeeks.org/print-binary-tree-vertical-order-set-2/?ref=rp 