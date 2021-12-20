#include<stdio.h>
#include<stdlib.h>


void dobro(int *x,int *y);

int main()
{
	
	int a,b;
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	
	dobro(&a,&b);

	printf("\nO valor 1 dobrado: %d",a);
	printf("\nO valor 2 dobrado: %d",b);

	printf("\n");
	system("pause");
	return 0;
}

void dobro(int* x, int* y)
{
	int aux;
	aux = (*x) * 2;
	*x = aux;
	aux = (*y) * 2;
	*y = aux;
}