#include<stdio.h>
int main()
{
	int dec,i,j=1,binary=0;
	int temp;
	printf("enter decimal no:");
	scanf("%d",&dec);
	temp=dec;
	while(temp!=0)
	{
		i=temp%2;
		temp=temp/2;
		binary=binary+(i*j);
		j=j*10;
		
	}
	printf("binary number is %d",binary);
return 0;
}
