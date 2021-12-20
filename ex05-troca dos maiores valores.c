#include<stdio.h>
#include<stdlib.h>


void maior(int *x,int *y,int *w);

int main()
{
	
	int a,b,v;
	printf("Digite o valor de a:");
	scanf("%d",&a);

	printf("Digite o valor de b:");
	scanf("%d",&b);
	
	maior(&a,&b,&v);

	if(v == 0)
	{
		printf("O valor de a(%d) eh maior que o valor de b(%d), nada foi alterado.\n",a,b);
	}
	else if (v == -1)
	{
		printf("Os valores foram trocados, agora, a = (%d), b = (%d).\n",a,b);
	}


	system("pause");
	return 0;
}

void maior(int* x, int* y, int *w)
{
	int aux;
	*w = 0; 
	if(*x < *y)
	{
		aux = *x;
		*x = *y;
		*y = aux;
		*w = -1; 
	}

}