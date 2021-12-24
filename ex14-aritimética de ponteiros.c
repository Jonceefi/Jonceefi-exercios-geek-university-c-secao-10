#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void preenche(int* v, int* p);

int main()
{
	int v[5],*p;  

	preenche(&v,&p);
	
	for(p=v;p<&v[5];p++)
	{
		printf("%d",*p);
	}

	system("pause");
	return 0;
}

void preenche(int* v, int *p)
{
	int num;
	printf("Digite um valor:");
	scanf("%d",&num);
	/*Princípio da aritimética de ponteiros*/
	for(p=v;p<=&v[5];p++)
	{
		*p = num;
	}

}