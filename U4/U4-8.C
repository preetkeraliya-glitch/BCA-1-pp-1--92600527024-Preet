// 8. Write A Program To Print 0 1 1 2 3 4 8 13.....n

#include<stdio.h>
#include<conio.h>

void main ()
{
	int N,n1=0,n2=1,s;

	clrscr();
	s=n1+n2;

	printf("\n Enter Value Of N : ");
	scanf("%d",&N);

	printf(" %d %d %d ",n1,n2,s);
	while(s<=N)
	{
		n1=n2;
		n2=s;
		s=n1+n2;
		printf(" %d",s);
	}

	getch();

}