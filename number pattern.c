#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;k<=n-1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		if(i!=1)
		{
			for(l=j-2
			;l>=1;l--)
			{
				printf("%d",l);
			}
		}
	printf("\n");
	}
return 0;
}









