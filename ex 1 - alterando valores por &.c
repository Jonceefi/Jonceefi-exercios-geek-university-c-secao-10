#include<stdio.h>
#include<stdlib.h>

int main()
{

	int inteiro = 15;
	float real = 1.5;
	char caractere[1] = "a";

	printf("Valores antes da modificacao!\n");
	printf("inteiro = %d\n",inteiro);
	printf("real = %.2f\n",real);
	printf("caractere = %c\n",caractere[0]);

	printf("Digite um inteiro:");
	scanf("%d",&inteiro);
	printf("Digite um real:");
	scanf("%f",&real);
	printf("Digite um caractere:");
	scanf("%s",&caractere[0]);

	printf("Valores apohs a modificacao!");
	printf("inteiro = %d\n",inteiro);
	printf("real = %.2f\n",real);
	printf("caractere = %c\n",caractere[0]);

	system("pause");
	return 0;
}
