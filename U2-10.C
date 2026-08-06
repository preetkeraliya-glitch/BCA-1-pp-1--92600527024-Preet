//wap that input quantity , price , discount and display final amount.

#include<stdio.h>
#include<conio.h>

void main ()

{

	int Q=0,P=0,D=0,T=0,FA=0;
	float DRS;

	clrscr();

	printf("******************");

	printf("\n Quantity : ",Q);
	scanf("%d",&Q);

	printf("\n Price : ",P);
	scanf("%d",&P);

	printf("\n Discount : ",D);
	scanf("%d",&D);

	T=Q*P;
	DRS=T*D/100;
	FA=T-DRS;

	printf("\n *************************");
	printf("\n Qty : %d",Q);
	printf("\n Price : %d Rs",P);
	printf("\n ______________________");
	printf("\n Total : %d Rs",T);
	printf("\n Disc(%) :");
	printf("%d",D);
	printf("\n Final Amount is : %d",FA);

	getch();
}