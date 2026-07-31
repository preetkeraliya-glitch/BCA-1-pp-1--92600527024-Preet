//write a program which find out the number is Pass or Fail
#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();

	printf("\n Enter your marks :");
	scanf("%d",&x);

	if(x<34)
	{
		printf("\n Result is fail");
	}

	else
	{
		printf("\n Result is pass");
	}

	getch();
}