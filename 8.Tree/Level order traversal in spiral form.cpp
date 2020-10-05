//THIS APPROACH USES TWO STACKS ||
// O(n) TIME AND O(n) EXTRA SPACE
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> v;
    if(root==NULL) return v;
    
    stack<Node *> s1; //to store elements from right to left
    stack<Node *> s2; //to store elements from left to right
    
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            Node *temp = s1.top();
            s1.pop();
            v.push_back(temp->data);
            
            if(temp->right)
                s1.push(temp->right);
            if(temp->left)
                s1.push(temp->left);
        }
        
        while(!s2.empty())
        {
            Node *temp = s2.top();
            s2.pop();
            v.push_back(temp->data);
            
            if(temp->left)
                s2.push(temp->left);
            if(temp->right)
                s2.push(temp->right);
        }
    }
    return v;
}

//THIS APPROACH USES A QUEUE AND A STACK
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> v;
    //initialize queue with root node
    queue<Node *> q;
    q.push(root);
    
    //initialize stack
    stack<int> s;

    int level = 1; //to get the level of the tree
    int p = 0;     // to store the size of queue

    if(root==NULL)
    return v; 
    
    while(!q.empty())
    {
        p = q.size();
        for(int i=0; i<p; i++)
        {
            Node *temp = q.front();
            q.pop();
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
    
            if(level%2!=0)     // if the level is odd then we will add the elements to stack as it follows LIFO
                s.push(temp->data);    // so the elements will store from left but will print from right i.e from top
            else
                v.push_back(temp->data); // if level is even then just store the elements in vector directly
        }
        while(!s.empty()) // after storing the elements in stack store them in vector 
        {
            v.push_back(s.top());  
            s.pop();
        }
        level++;
    }
    return v;
}
