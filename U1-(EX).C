//wap that input 3 value from user and if x is maximum than add. of all number, y is maximum than sab. of all number, z is maximum than multy. of all number.
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,a,s,m;
	clrscr();

	printf("\n Enter Value of x :");
	scanf("%d",&x);

	printf("\n Enter Value of y :");
	scanf("%d",&y);

	printf("\n Enter Value of z :");
	scanf("%d",&z);

	if(x>y)
	{
		if(x>z)
		{
		       a=x+y+z;
		       printf("\n Addistion of all number is : %d",a);
		}
		else
		{
		       m=x*y*z;
		       printf("\n Multyplication of all number is : %d",m);
		}
	}

	else
	{
		if(y>z)
		{
		       s=y-x-z;
		       printf("\n Subtraction of all number is : %d",s);
		}
		else
		{
		       m=x*y*z;
		       printf("\n Multyplication of all number is : %d",m);
		}
	}

	getch();
}