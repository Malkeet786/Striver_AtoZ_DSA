void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *newNode=new Node(data);
   Node *temp=head;
   while(pos--){
       temp=temp->next;
   }
    newNode->next = temp->next;
   
   newNode->prev = temp;
   
   if(temp->next != NULL){
   
       temp->next->prev = newNode;
   
   }
   temp->next=newNode;
   
}