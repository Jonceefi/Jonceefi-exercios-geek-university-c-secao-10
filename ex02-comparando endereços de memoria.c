#include<stdio.h>
#include<stdlib.h>


int nmaior(int x, int y);

int main()
{
	
	int a,b, maior;
	printf("Digite o 1o valor:");
	scanf("%d",&a);

	printf("Digite o 2o valor:");
	scanf("%d",&b);

		maior = nmaior(a,b);

	if(maior == -1)
	{
		printf("O endereco da variavel a (%d) eh maior (%d) \n",a,&a);
	}
	if(maior == 0)
	{
		printf("O endereco da variavel a (%d) eh maior (%d) \n",b,&b);
	}
	
	system("pause");
	return 0;
}

int nmaior(int x, int y)
{
	if(&x > &y)
	{
		return -1;
	}
	else if(&y > &x)
	{	
		return 0;
	}
}