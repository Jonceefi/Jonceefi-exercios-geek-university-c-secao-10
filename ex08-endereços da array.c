#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	float array[2][5];
	printf("Digite os valores para a array:\n");	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%f",&array[i][j]);
		}
	}
	printf("Enderecos da array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%d]",&array[i][j]);
		}
		printf("\n");
	}		

	system("pause");
	return 0;
}