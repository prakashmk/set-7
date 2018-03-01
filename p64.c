#include<stdio.h>
#include<string.h>
int main()
{
   int n,m,c;
   printf("Enter the number:");
   scanf("%d%d",&n,&m);
   c=n+m;
   if(c%2==0)
   {
     printf("Even");
   }
   else
   {
     printf("Odd");
   }
   return 0;
}
