// 9. Print first 10 natural number with its square and cube.

#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j;
    clrscr();

    printf("\n Using For Loop \n");
    for (i = 1; i <= 10; i++)
    {
	printf("%d, %d, %d \n", i,i*i,i*i*i);
    }

    printf("\n Using While Loop \n");
    j=1;
    while(j<=10)
    {
	printf("%d, %d, %d \n", i,i*i,i*i*i);
	j++;
    }
    getch();
}