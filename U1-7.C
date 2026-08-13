//wap that input 3 value from user and find out maximum.
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
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
			printf("\n %d is maximum",x);
		}
		else
		{
			printf("\n %d is maximum",z);
		}
	}

	else
	{
		if(y>z)
		{
			printf("\n %d is maximum",y);
		}
		else
		{
			printf("\n %d is maximum",z);
		}
	}

	getch();
}