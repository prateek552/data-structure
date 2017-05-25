#include<string.h>
#include <stdio.h>
int main()
{
   char num[100];
   FILE *fptr;

   if ((fptr = fopen("./text.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

 while(num!=NULL)
 {


   num=getchar();

   printf("Value of n=%s",num);
 }
   fclose(fptr);

   return 0;
}
