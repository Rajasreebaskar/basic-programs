#include<stdio.h>
int main()
{
	char a[100],i;
	printf("enter the string:");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a')&&(a[i]<='z') ||(a[i]>='A')&&(a[i]<='Z'))
		printf("%c",a[i]);
    }
    return 0;
	
}
