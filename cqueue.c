	#include<stdio.h>
	#include<conio.h>
	typedef struct cqueue
	{
        int info;
        struct cqueue *next;
	}node;
	void insert(node **,node **);
	void delet(node **,node**);
	void display(node *,node *);
	void main()
	{
	    node *front=NULL,*rear=NULL;
        int ch;
        do
        {
            printf("\npress 1 to insert the element : ");
            printf("\npress 2 to delete the element : ");
            printf("\npress 3 to display the queue : ");
            printf("\npress 4 to exit from main : ");
            printf("\nEnter choice : ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                insert(&front,&rear);
                break;
                case 2:
                delet(&front,&rear);
                break;
                case 3:
                display(front,rear);
                break;
                case 4:
                exit(0);
                default:
                printf("\nInvalid choice :");
            }
            getch();
        }while(1);
	}
	void insert(node **front,node **rear)
	{
        node *newnode;
        newnode=(node*)malloc(sizeof(node));
        printf("\nEnter the node value : ");
        scanf("%d",&newnode->info);
        newnode->next=NULL;
        if(*rear==NULL)
        *front=*rear=newnode;
        else
        {
            (*rear)->next=newnode;
            *rear=newnode;
        }
        (*rear)->next=front;
	}
	void delet(node **front,node **rear)
	{
        node *temp;
        temp=*front;
        if(*front==NULL)
        printf("\nEmpty :");
        else
        {
            if(*front==*rear)
            {
                printf("\n%d",(*front)->info);
                *front=*rear=NULL;
            }
            else
        {
        printf("\n%d",(*front)->info);
        *front=(*front)->next;
        (*rear)->next=*front;
        }
        free(temp);
        }
	}
	void display(node *front,node *rear)
	{
	    node *temp;
        temp=front;
        if(front==NULL)
        printf("\nEmpty");
        else
        {
            printf("\n");
            for(;temp!=rear;temp=temp->next)
            printf("\n%d \t",temp->info);
            printf("\n%d \t",temp->info);
	 }
	}
