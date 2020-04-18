//fill in left zeros and right ones
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,count1,count2;
	printf("Enter the array element::");
	for(i=0;i<10;i++)
	{
	 scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]==0)
		{
			count1++;
		}
		else if(a[i]==1)
		{
			count2++;
		}
	}
	for(i=0;i<count1;i++)
	{
		a[i]=0;
	}
	for(i=count1-1;i<10;i++)
	{
		a[i]=1;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
