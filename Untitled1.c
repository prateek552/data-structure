#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        int long t,m,k,i,j,mi,a[100001];long c;
        scanf("%d\n",&t);
        while(t--)
            {
            mi=0;c=0;
            scanf("%d%d",&m,&k);
                for(i=0;i<m;i++)
                {
                    scanf("%d",&a[i]);
                    if(mi<a[i])
                        mi=a[i];
            }
            for(j=mi;j<100000;j++)
                for(i=1;i<m;i++)
                {
                if(j%a[i]==0)
                        c++;
                    else
                c=0;
            }
            if (c%k==0)
                printf("YES");
             else
                 printf("NO");

        }

    return 0;
}
