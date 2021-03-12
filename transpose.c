#include<stdio.h>
int main()
{
	int i,j, m,n;
	int a[10][10], transpose[10][10];
	printf("enter no of rows and columns:");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element-a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The entered matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	 printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	printf("The transposed matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}
