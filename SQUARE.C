	// Write a Program Which Display Sum Of Two Number
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;  //variable declaration
	clrscr();

	printf("\n Enter Value of x :");
	scanf("%d",&x);

	y=x*x;
	printf("\n Square is : %d",y);

	z=x*x*x;
	printf("\n Cube is : %d",z);

	getch();
}
