#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j=0,l;
    printf("enter the string:");
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
    b[j]=a[i];
    j++;
        
    }
      printf("%s",b);
    
}
