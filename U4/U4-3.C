//wap to display 1 to 10 using loop

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,n,j;

	clrscr();

	printf("\n Enter Value of N : ");
	scanf("%d",&n);

	printf("\n Using For Loop \n");
	for(i=1;i<=n;i=i+2)
	{
		printf(" %d",i);
	}

	printf("\n Using While Loop \n");
	j=1;
	while(j<=n)
	{
		printf(" %d",j);
		j=j+2;
	}
	getch();
}