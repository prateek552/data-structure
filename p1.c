#include<stdio.h>
#include<conio.h>
#include<malloc.h>
typedef struct node
{
    int info;
    struct node *next;
}nodetype;
void insert(nodetype **l,nodetype **r)
{   nodetype *p;int n;
p=(nodetype*)malloc(sizeof(nodetype));
    printf("ENTER THE ELEMENTS\n");
    scanf("%d",&n);
    p->info=n;
if(*l==NULL)
{
    *l=p;
     *r=*l;
}
else
{
    (*r)->next=p;
    *r=p;
}
}
nodetype *reverse(nodetype *l,nodetype **tp)
{int m;
        nodetype *t;
        t=(nodetype*)malloc(sizeof(nodetype));
        t->info=l->info;
        t->next=*tp;
        *tp=t;
        m=(*tp)->info;
       l=l->next;
       if(l==NULL)
            return(1);
       else
        return(reverse(l,&tp));


}
void display(nodetype *tp)
{int m;
    while(tp!=NULL)
    {
        m=tp->info;
        printf("%d",m);
        tp=tp->next;

    }
}
void main()
{

        nodetype *l=NULL;int c; nodetype *tp=NULL;
         nodetype *r=NULL;
         printf("ENTER 1 TO INSERT AND 2 TO REVERSE\n ");
         do
         {
             scanf("%d",&c);
             switch(c)
             {
                 case 1:insert(&l,&r);
                        break;
                case 2:reverse(l,&tp);
                        display(tp);
                      }
         }while(c!=3);
         getch();

}
