#include<stdio.h>
int main()
{
	int a[10],b[10],c[10];
	int m,n,i,j;
	int len,temp;
	printf("enter the no of elements for array 1:");
	scanf("%d",&m);
	printf("enter array of elements:\n");
	for(i=0;i<m;i++)
	  scanf("%d",&a[i]);
	printf("enter the no of elements for array 2:");
	scanf("%d",&n);
	printf("enter array of elements:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&b[i]);
	len=m+n;
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	j=0;
	for(;i<len;i++)
	{
		c[i]=b[j];
		j++;
	}
	printf("The merged array is :\n");
	for(i=0;i<len;i++)
	 {
	  printf("%d\t",c[i]);
     }
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\n The descending order of merged array is:\n");
	for(i=0;i<len;i++)
	{
	 printf("%d\t",c[i]);
     }
  return 0;	
}
