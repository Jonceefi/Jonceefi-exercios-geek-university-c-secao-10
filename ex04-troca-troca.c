#include<stdio.h>
#include<stdlib.h>


void trocatroca(int* x,int* y);

int main()
{
	
	int a,b;
	printf("Digite o valor de a:");
	scanf("%d",&a);

	printf("Digite o valor de b:");
	scanf("%d",&b);

	printf("\nAntes do troca-troca:");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	
	trocatroca(&a,&b);

	printf("\nApos o troca-troca:");
	printf("\na = %d",a);
	printf("\nb = %d\n",b);


	system("pause");
	return 0;
}

void trocatroca(int* x, int* y)
{
	int aux;

	aux = *x;
	*x = *y;
	*y = aux;

}