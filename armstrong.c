//check armstrong number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,rev=0,i;
	printf("Enter the number::");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		i=num%10;
		rev=rev+(i*i*i);
		num=num/10;
	}
	if(rev==n)
	{
		printf("%d is armstong number",rev);
	}
	else
	{
		printf("%d is not armstrong number",rev);
	}
	getch();
}
