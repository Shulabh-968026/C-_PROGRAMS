#include<stdio.h>
#include<conio.h>
#include<String.h>
struct phonebook
{
	char name[30];
	char pno[10];
	char email[40];
};
struct phonebook p;
void main()
{
	FILE *fp;
	int option;
	char ch;
start:	printf("1.Enter New Phone Number\t\t\t2.Show Phone List\n");
	scanf("%d",&option);
	switch(option)
	{
	case 1:fp=fopen("phonebook.txt","ab");
	      {
	      	fflush(stdin);
		   printf("Enter the Name::");
		   gets(p.name);
		   fflush(stdin);
		   printf("Enter the Contact No::");
		   gets(p.pno);
		   fflush(stdin);
		   printf("Enter the Email::");
		   gets(p.email);
		   fwrite(&p,sizeof(p),1,fp);
	       }
	       fclose(fp);
	       fflush(stdin);
	       printf("you want continue (y/n)??");
	       ch=getchar();
	       if(ch=='y' || ch=='Y')
	       {
	       	goto start;
		   }
		   else
		   {
		   	goto finish;
		   }
	       break;
	case 2:
	       printf("\t\t\Phone Book Data:-\n");
	       printf("Name\tContact No\tEmail\n");
	       fp=fopen("phonebook.txt","rb");
	       while(!feof(fp))
	       {
		   fread(&p,sizeof(p),1,fp);
		   printf("%s\t%s\t%s\n",p.name,p.pno,p.email);
	       }
	       fclose(fp);
	       fflush(stdin);
	       printf("you want continue (y/n)??");
	       ch=getchar();
	       if(ch=='y' || ch=='Y')
	       {
	       	goto start;
		   }
		   else
		   {
		   	goto finish;
		   }
	       break;
	default:printf("Enter correct option");
	        break;
    }
    finish:
    	printf("Thank you");
	getch();
}
