#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],n,b,d,j,i;
    printf("enter limit of an array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    scanf("%d",&d);j=d;
    while(j<n)
    {
        a[j]=a[j+1];
        j++;
    }
    a[j]=b;
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }

}
