int getCount(struct Node* head){
    int count = 1;
    Node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}