#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],i,j;
	printf("enter string 1:");
	gets(a);
	printf("enter string 2:");
	gets(b);
	for(i=0;a[i]!='\0';i++);
	{
		a[i]=' ';
		i++;
	}
		for(j=0;b[j]!='\0';j++)
		{
			a[i]=b[j];
			i++;
		}
	a[i]='\0';
	printf("%s",a);
	return 0;
}
