#include <stdio.h>
#include<string.h>
int main(void)
{
   char s[10];
   int i,k;
   printf("Enter the string:");
   scanf("%s",&s);
   printf("Enter the number:");
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {
     printf("%c",s[i]);
   }
    return 0;
}
