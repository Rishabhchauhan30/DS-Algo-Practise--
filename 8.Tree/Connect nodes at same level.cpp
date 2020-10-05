// Should set the nextRight for all nodes
void connect(Node *p)
{
   // Your Code Here
   queue<Node *> q;
   q.push(p);
   //this will take care that the level is over or one level is done
   q.push(NULL);
   
   while(!q.empty())
   {
       Node *t = q.front();
       q.pop();
       //if t is not pointing to NULL
       if(t!=NULL) 
       {
           //just add queues front adress to the nextRight of current node
           t->nextRight = q.front();
           
           if(t->left) q.push(t->left);
           if(t->right) q.push(t->right);
           
       }
       //here we check that t i pointing to NULL i.e level is completed so push the NULL
       else if(!q.empty())
           q.push(NULL);
   }
}
//Time complexity :O(n) where n is the number of nodes

