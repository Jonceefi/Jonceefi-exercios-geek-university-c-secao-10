#include<stdio.h>
#include<stdlib.h>


void soma(int *x,int y);

int main()
{
	
	int a,b;
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	
	soma(&a,b);

	printf("\nO valor 1 agora vale: %d",a);
	printf("\nO valor 2 continua a valer: %d",b);

	printf("\n");
	system("pause");
	return 0;
}

void soma(int* x, int y)
{
	int aux;
	aux = (*x)+y;
	*x = aux;
}