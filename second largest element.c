#include<stdio.h>
int main()
{
	int a[10],n,i,j;
	int temp;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the array of elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nThe second largest element is %d",a[1]);
return 0;
}
