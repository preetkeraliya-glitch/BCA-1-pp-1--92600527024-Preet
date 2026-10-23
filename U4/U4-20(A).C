// 20(a).make a triangle
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
			printf("%d",j);
		}
		printf("\n");
	}

	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}