//wap to interchang two numbers without using third veriable
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

	x=x+y;
	y=x-y;
	x=x-y;

	printf("\n Interchange Value of x is : %d",x);
	printf("\n Interchange Value of y is : %d",y);

	getch();

}




