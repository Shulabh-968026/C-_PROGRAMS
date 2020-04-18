//find magical number
#include<stdio.h>
#include<conio.h>
int revNumber(int num)
{
	int i,rev=0;
	while(num!=0)
	{
		i=num%10;
		rev=rev*10+i;
		num=num/10;
	}
	//printf("rev number::%d  ",rev);
	return rev;
	
}
int sumDigit(int number)
{
	int i=0,sum=0;
	while(number!=0)
	{
		i=number%10;
		sum=sum+i;
		number=number/10;
	}
	//printf("sum of digit %d",sum);
    return sum;
}
void main()
{
	int num,a,b,i,temp;
	printf("Enter the number::");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		a=0;
		b=0;
		temp=i;
	a=sumDigit(i);
	b=revNumber(a);
	if(temp==(a*b))
	{
		printf("%d\t",temp);
	}
}
	getch();
}
