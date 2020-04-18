//find angle of triangle for given length of sides
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	double A,B,C;
	const double PI= 3.141517;
	printf("Enter the value of a b and c::");
	scanf("%d%d%d",&a,&b,&c);
	A=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
	B=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
	C=acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a));
	A*=180/PI;
	B*=180/PI;
	C*=180/PI;
	
	printf("Angle of A::%lf\n",A);
	printf("Angle of B::%lf\n",B);
	printf("Angle of C::%lf\n",C);		
}
