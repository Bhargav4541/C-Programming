#include<stdio.h>
void main()
{
char a[20];
printf("Enter any word:");
gets(a);
int len=strlen(a)-1;
for(int i=0,j=len;i<=j;i++,j--)
{
if(a[i]!=a[j])
{
printf("Not a palindrome");
return;
}
}
printf("Palindrome");
}