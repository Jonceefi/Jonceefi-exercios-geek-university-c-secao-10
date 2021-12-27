#include<stdio.h>
#include<stdlib.h>


void fracc(float num, int *inteiro, float *frac);

int main()
{
	float num;
	int *inteiro;
	float *frac;

	printf("Digite um real: ");
	scanf("%f",&num);

	fracc(num,inteiro,frac);

	system("pause");
	return 0;
}

void fracc(float num, int *inteiro, float *frac)
{
	float aux;
	inteiro = (int)num;
	aux = num - (int)num;
	frac = &aux;
	printf("parte inteira: %d\n",inteiro);
	printf("parte fracionada: %.2f\n",*frac);
	
}