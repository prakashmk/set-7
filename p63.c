#include<stdio.h>
#include<string.h>
int main()
{
  int i,n,count=0;
  char s[100];
  printf("Count the number of words in a given sentence\n");
  printf("Enter the string:");
  scanf("%s",&s);
  n=strlen(s);
  for(i=1;i<n;i++)
  {
    count=count+1;
  }
  printf("%d",i);
  return 0;
}
