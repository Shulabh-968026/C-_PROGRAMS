//find happy number
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num,sum=0,i,j;
	printf("Enter the number::");
	scanf("%d",&num);
	j=num;
	while(sum!=1 && sum!=4)
	{
		sum=0;
		while(num!=0)
		{
			i=num%10;
			sum=sum+pow(i,2);
			num=num/10;
		}
		num=sum;
	}
	if(sum==1)
	{
		printf("%d is happy number",j);
	}
	else
	{
		printf("%d is not happy number",j);
	}
     getch();
}
