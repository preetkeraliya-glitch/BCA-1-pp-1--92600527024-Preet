// Write a Program Which Display Sum Of Two Number
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,a,s,m,d;  //variable declaration
	clrscr();

	printf("\n Enter Value of x :");
	scanf("%d",&x);

	printf("\n Enter Value of y :");
	scanf("%d",&y);

	a=x+y;
	printf("\n %d is answer",a);

	s=x-y;
	printf("\n %d is answer",s);

	m=x*y;
	printf("\n %d is answer",m);

	d=x/y;
	printf("\n %d is answer",d);

	getch();
}
