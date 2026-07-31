// wap to displa Simpal interest

#include<stdio.h>
#include<conio.h>

void main ()

{
	float pa,r,y,si;

	clrscr();

	printf("\n Enter the principle Amount : ");
	scanf("%f",&pa);

	printf("\n Enter the Rate of Interest : ");
	scanf("%f",&r);

	printf("\n Enter the No. of Years : ");
	scanf("%f",&y);

	si=pa*r*y/100;
	printf("\n ***************************");
	printf("\n Principle Amount : %.2f",pa);
	printf("\n Rate of Interest : %.2f",r);
	printf("\n No. of Years : %.2f",y);
	printf("\n ***************************");
	printf("\n Simpal Interest is : %.2f",si);

	getch();

}
