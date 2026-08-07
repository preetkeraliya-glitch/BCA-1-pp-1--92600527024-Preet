//wap that input 2 values from user and find out maximum
#include<stdio.h>
#include<conio.h>

void main ()

{
	int x,y;

	clrscr();

	printf("\n Enter Value of x :");
	scanf("%d",&x);

	printf("\n Enter Value of y :");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\n Value of x is Maximum");
	}
	else
	{
		printf("\n Value of y is Maximum");
	}

	getch();

}
