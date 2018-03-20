include <stdio.h>
void main()
{
 char a[10],t[10];
 int i;
 printf("enter the string:\n");
 scanf("%[^\n]s",a);
 for(i=0;a[i]!='\0';i++)
 {
     if(a[i]!=' ')
     {
     printf("%c",a[i]);
     }
 }

}
