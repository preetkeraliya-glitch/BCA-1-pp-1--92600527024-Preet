// 20(C).make a triangle
#include<stdio.h>
#include<conio.h>

void main ()
{
	int i,j,n;
	clrscr();

	printf("\n Enter Value Of N : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j % 2 == 1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}

	getch();
}