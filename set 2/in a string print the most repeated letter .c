#include<stdio.h>
void main()
{
	char a[50];
	int i,j,r,l,c=0,m=0;
	printf("Enter the string:");
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
			if(c>m)
			{
				r=a[i];
				m=c;
			}
		}
	}
	printf("%c",r);
}
