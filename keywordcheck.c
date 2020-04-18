#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char keyword[52][15]={"int","float","char","long","double","break","auto","struct",
	"else","if","for","while","switch","case","enum","register","typeof","extern","return",
	"union","const","short","unsigned","continue","signed","void","default","goto","sizeof",
	"voltaile","do","static"};
	char str[25];
	int i,f=0;
	printf("Enter the string::");
	scanf("%s",str);
	for(i=0;i<53;i++)
	{
		if(strcmp(keyword[i],str)==0)
		{
		   f=1;
		   break;
		}
	}
	if(f==1)
	{
		printf("%s is keyword",str);
	}
	else
	{
	     printf("%s is not keyword",str);	
	}
	getch();
}
