#include<stdio.h>
void main()
{
 int a,b,i,j,c=0;
 printf("enter the number:\n");
 scanf("%d\t%d\t",&a,&b);
 for(i=a;i<=b;i++)
 {
     for(j=1;j<=b;j++)
     {
    if(i==(j*j))
    c++;
     }
 } 
 printf("\n%d",c);
}
