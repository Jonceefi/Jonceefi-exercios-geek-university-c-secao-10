#include<stdio.h>
#include<stdlib.h>

int pares(int *array);

int main()
{
	int i,v,array[5];
	
	printf("Digite os valores para a array:\n");	
		for(i=0;i<5;i++)
		{
			scanf("%d",&array[i]);
		}

	v = pares(&array);

		if(v == 0)
		{
			printf("O array nao contehm valor par!\n");
		}	
	system("pause");
	return 0;
}
int pares(int *array)
{
	int i,v,aux;
	v = 0;
	for(i=0;i<5;i++)
	{
		aux = array[i];
		if (aux%2 == 0)
		{
			printf("%d eh par e seu endereco eh: %d\n",array[i],&array[i]);
			v = 1;
		}
	}
	return v;
}