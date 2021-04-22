Node* segregate(Node *head) 
{
int arr[3]={0};
Node*temp=head;
while(temp!=NULL)
{
arr[temp->data]++;
temp=temp->next;
}
temp=head;
for(int i=0;i<3;i++)
{
while(arr[i]--)
{
temp->data=i;
temp=temp->next;
}
}
return head;

}