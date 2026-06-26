// Find_Middle_of_Linked_List

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    struct Node *head=NULL,*temp=NULL,*newnode;
    for(int i=0;i<n;i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    struct Node *slow=head;
    struct Node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("Middle Node = %d",slow->data);
    return 0;
}

/* OUTPUT

Enter number of nodes: 7
Enter data: 10
Enter data: 20
Enter data: 30
Enter data: 40
Enter data: 50
Enter data: 60
Enter data: 70
Middle Node = 40   

Enter number of nodes: 6
Enter data: 10
Enter data: 20
Enter data: 30
Enter data: 40
Enter data: 50
Enter data: 60
Middle Node = 40     */