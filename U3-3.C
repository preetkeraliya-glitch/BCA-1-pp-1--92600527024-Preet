//wap that find out person is eligibel for vote or not
#include<stdio.h>
#include<conio.h>

void main ()

{
	int x;

	clrscr();

	printf("\n Enter Your Age :");
	scanf("%d",&x);

	if(x>=18)
	{
		printf("\n Your are Eligible for Vote");
	}
	else
	{
		printf("\n Your are Not Eligible for Vote");
	}

	getch();

}