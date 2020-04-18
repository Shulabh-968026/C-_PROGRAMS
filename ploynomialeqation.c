//number diamond
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,a[10],i,x,sum=0;
	printf("Enter the degree of polynomial::");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter the value of x^%d ::",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the value of x::");
	scanf("%d",&x);
	printf("plyenomial equation is::");
	for(i=n;i>0;i--)
	{
		printf("%dx^%d+",a[i],i);
		sum=sum+(pow(x,i)*a[i]);
		
	}
	printf("%d=%d",a[0],(sum+a[0]));
	getch();
}
