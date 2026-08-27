//WAP display ASCII code of input Character
#include<stdio.h>
#include<conio.h>

void main ()
{
	char x;

	clrscr();

	printf("\n Enter any Character : ");
	scanf("%c",&x);

	printf("\n Input Character is : %c",x-32);
	printf("\n ASCII Code is : %d",x-32);

	getch();
}