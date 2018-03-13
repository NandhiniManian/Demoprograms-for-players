#include<stdio.h>
void main()
{
int a[10],b[10],n,c=0,i,j;
printf("enter the n value:\t");
scanf("%d",&n);
printf("enter the array values:\t");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);	
}
printf("\n");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);	
}
for(i=0;i<n;i++)
{
for(j=n-1;j>=0;j--)
{
if(a[i]==b[j])	
{
c++;
}
}
}
if(c==n)
{
printf("yes");	
}
else
{
printf("no");
}
}
