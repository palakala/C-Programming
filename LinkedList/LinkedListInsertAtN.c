#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int data,int n)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    int i;
    temp->data= data;
    temp->next= NULL;
    if(n==1)
    {
        temp->next=head;
        head= temp;
        return;
    }
    
    struct Node* temp2=head;
    for(i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next= temp;



}
void print()
{
    struct Node* temp=head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp= temp->next;
    }

}
int main()
{
    
    head = NULL;
    insert(2,1);
    insert(1,2);
    insert(4,1);
    insert(5,2);
    print();
}
