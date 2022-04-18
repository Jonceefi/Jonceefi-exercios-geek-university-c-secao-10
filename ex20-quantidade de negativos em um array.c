#include<stdio.h>
#include<stdlib.h>

int negativos(float *vet, int N);

int main()
{
	int i,p;
	printf("Qual a ordem da array?\n");
	scanf("%d",&i);
	
	float vet[i];
	
		for(p=0;p<i;p++)
		{
			printf("Digite o %dº numero real:",p);
			scanf("%f",&vet[p]);
		}
	
	i = negativos(vet,p);		
	
	printf("\nA array possui %d números negativos",i);		   	   	
	
	return 0;
}

int negativos(float *vet,int N)
{
	int i,j, menor;
	
	menor = 0;
	
		for(i=0;i<N;i++)
		{
			if(vet[i] < 0)
			{
				menor++;
			}
	    }	
	
	return menor;	
}