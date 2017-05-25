#include <stdio.h>
#include <conio.h>
push(float s[],int *top,float elem)
{
    s[++(*top)]=elem;
}
float pop(float s[],int *top)
{
    return(s[(*top)--]);
}
void main()
{
    float s[100];int tp=-1;
    char po[100],ch;
    int i=0;float op1,op2;
    printf("\n\nRead the Postfix Expression ? ");
    scanf("%s",po);
    while(ch=po[i++])
    {
        if(isdigit(ch)) push(s,&tp,ch-'0');
        else
        {
            op2=pop(s,&tp);
            op1=pop(s,&tp);
            switch(ch)
            {
                case '+':push(s,&tp,op1+op2);break;
                case '-':push(s,&tp,op1-op2);break;
                case '*':push(s,&tp,op1*op2);break;
                case '/':push(s,&tp,op1/op2);break;
            }
        }
    }
    printf("\n Given Postfix Expn: %s\n",po);
    printf("\n Result after Evaluation: %f\n",s[tp]);
}
