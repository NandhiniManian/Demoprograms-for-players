#include<stdio.h>
#include<string.h>
void main()
{
char a[10];
int l;
printf("enter the string:\t");
gets(a);
l=strlen(a);
a[l]='.';
printf("\nthe string is:%s",a);
}
