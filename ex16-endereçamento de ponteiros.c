#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,*b,**c,***d;
	printf("Digite um valor!");
	scanf("%d",&a);

	b = a*2;
	c = a*3;
	d = a*4;
	
	printf("Dobro: %d\n",b);
	printf("Triplo: %d\n",c);
	printf("Quadruplo: %d\n",d);

	system("pause");
	return 0;
}