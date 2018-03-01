#include<stdio.h>
#include<string.h>
int main()
{
   int i,n,f=0;
   char s[100];
   printf("The given string is in binary representation or not\n");
   printf("Enter the string:");
   scanf("%s",&s);
   n=strlen(s);
   for(i=0;i<n;i++)
  {
     if((s[i]=='0')||(s[i]=='1'))
      {
        f+=1;
      }
    }
  if(f==n)
  {
   printf("Yes");
  }
  else
  {
    printf("No");
   }
 return 0;
}
