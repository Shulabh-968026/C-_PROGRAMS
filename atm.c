#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<String.h>
struct accountinfo{
	char name[20];
	char address[100];
	int pin;
};
struct accountinfo a[100];
void main()
{
	char n[20],ch;
	int p,option;
	FILE *f;
	start:
	printf("1.Login \t\t\t\t2.Signup\n");
	printf("Enter the option::");
	scanf("%d",&option);
	switch(option)
	{
	 case 1:printf("Enter the Name::");
		  scanf("%s",n);
		  printf("Enter the pin");
		  scanf("%d",&p);
		  f=fopen("account","r");
		  if(strcmp(a[0].name,n)==0 && a[0].pin==p)
		  {
		  	printf("hello");
		  }
		  fclose(f);
		  break;
     case 2:printf("Enter the Name::");
		  scanf("%s",a[0].name);
		  printf("Enter the address::");
		  scanf("%s",a[0].address);
		  printf("Enter the pin::");
		  scanf("%d",&a[0].pin);
		  f=fopen("account","a");
		  fprintf(f,"%s%s%d",a[0].name,a[0].address,a[0].pin);
		  printf("%d",a[0].pin);
		  fclose(f);
		  fflush(stdin);
		  printf("you want contniue  y/n  ??");
		  ch=getchar();
		  if(ch=='y' || ch=='Y')
		  {
		  	goto start; 
		  }
		  else{
		  	printf("tata");
		  	goto finish;
		  }
		  break;
	    default:printf("please choose a right option");
		        break;
	}
	finish:
		getch();
}
