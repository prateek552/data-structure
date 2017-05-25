#include<stdio.h>
#include<conio.h>
int main()
{
    int a,d,k,i,j,m,n,c;
    scanf("%d",&a);
    for(k=0;k<a;k++)
    {
    d=0;
    scanf("%d%d%d",&m,&n,&c);
    for(i=1;i<=m;i++)
    {
            for(j=1;j<=n;j++)
            {
                    if((i*j)==c)
                        d++;
            }
    }
    printf("%d\n",d);

    }
    return 0;
}
