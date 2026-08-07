//write a program which find out number is equal or if not then find meximum
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	clrscr();

	printf("\n Enter Value of x :");
	scanf("%d",&x);

	printf("\n Enter Value of y :");
	scanf("%d",&y);

	if(x == y)
	{
		printf("\n Both are Equal");
	}

	else
	{
		printf("\n Both are not Equal");
		if(x>y)
		{
			printf("\n Value of x is Maximum");
			printf("\n Square of x is : %d",x*x);
		}
		else
		{
			printf("\n Value of y is Maximum");
			printf("\n Square of y is : %d",y*y);
		}
	}

	getch();
}