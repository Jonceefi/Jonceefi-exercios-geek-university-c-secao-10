#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void imprime(int* v, int* p);

int main()
{
	int v[] = {0,1,2,3,4,5};
	int *p;  

	imprime(&v,&p);
	
	system("pause");
	return 0;
}

void imprime(int* v, int *p)
{
	for(p=v;p<=&v[5];p++)
	{
		printf("Valores = %d\n",*p);
	}

}