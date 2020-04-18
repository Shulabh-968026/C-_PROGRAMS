//muliplication by addition
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	int s;
	printf("Enter the number::");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		s+=a;
	}
	printf("Multipliction value is::%d",s);
	getch();
	
}
