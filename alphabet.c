#include<stdio.h>
int main()
{
char c;
printf("enter character:");
scanf("%c"&c);
if(c>='a' && c<='z')
printf("%c is an alphabet",c);
else
printf("%c is an not alphabet",c);
return 0;
