#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i, digits=0, alphabets=0,special_characters=0;
	printf("enter string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z'))
		{
			alphabets++;
		}
		else if((a[i]>='0')&&(a[i]<='9'))
		{
			digits++;
		}
		else if((a[i]>=32)&&(a[i]<=47)|| (a[i]>=58)&&(a[i]<=64)||(a[i]>=91)&&(a[i]<=96)||(a[i]>=123)&&(a[i]<=127))
		{
			special_characters++;
		}
		
       }
       printf("alphabets= %d\n",alphabets);
	   printf("numbers= %d\n",digits);
	   printf("special characters= %d\n",special_characters);
	return 0;
	
}
