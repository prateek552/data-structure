#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
    int info;
    struct node *next;
};
struct node* insert(struct node *);
struct node* serve(struct node *);
void display(struct node *);
void main()
{
    struct node *ff,*rr=NULL;int ch1;int opt;
    printf("enter ur choice");

    do
    {
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            {

                rr=insert(rr);
                if(ff=NULL)
                {
                    ff=rr;
                }
                break;

            }
             case 2:
            {
                ff=serve(ff);
                if(ff=NULL)
                {
                    rr=NULL;
                }
                break;

            }
             case 3:
            {
                display(ff);
                break;

            }
            default:printf("invalid choice");
        }printf("do u want to continue 4");
        scanf("%d",&ch1);
        }while(ch1==4);
        getch();
    }
    struct node* insert(struct node *rr)
    {
        struct node *p;
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->info);p->next=NULL;
        if(rr==NULL)
        rr=p;
        else
        {
        rr->next=p;
        rr=p;
        }
        return(rr);
    }
    struct node* serve(struct node *ff)
    {
        struct node *temp;
        temp=ff;
        printf("%d",ff->info);
        ff=ff->next;
        free(temp);
        return (ff);
    }
    void display(struct node *ff)
    {
            while(ff->!=NULL)
            {
             printf("%d",ff->info);
             ff=ff->next;
            }
    }
