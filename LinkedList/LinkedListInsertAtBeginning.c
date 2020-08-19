#include<stdio.h>
#include<stdlib.h>

struct Node
{
   
    int data;
    struct Node* next;
};

struct Node* head;
void insert(int x)
{
    struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
    temp->data= x;
    temp->next= head;
    head= temp;
}

void print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
    printf("%d\t",temp ->data);
    temp = temp ->next;
    }
} 


int main()
{
    head = NULL;
    int n,i,x;
    printf("How many Numbers \n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the Number: \n");
        scanf("%d",&x);
        insert(x);
        print();
    }
}
