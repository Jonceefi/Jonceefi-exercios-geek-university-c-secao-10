#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vet[5],i,*ptr;
	*ptr = &vet[0];
	
		for(i=0;i<5;i++)
		{
			printf("Digite o %do numero:",i+1);
			scanf("%d",&vet[i]);
		}
		printf("\nValores e endereços:\n");
		for(i=0;i<5;i++)
		{
			printf("\n vet[%d] = %d endereco de memoria [%d]",i+1,vet[i],*ptr+i);
			
		}	
	printf("/n");	   	   	
	return 0;
}