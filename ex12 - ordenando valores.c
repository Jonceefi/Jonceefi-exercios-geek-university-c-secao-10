#include<stdio.h>
#include<stdlib.h>


int maior(int *x,int *y,int *w);

int main()
{
	
	int a,b,c,r;
	printf("Digite o valor de a:");
	scanf("%d",&a);
	printf("Digite o valor de b:");
	scanf("%d",&b);
	printf("Digite o valor de c:");
	scanf("%d",&c);
	
	r = maior(&a,&b,&c);


	printf("Codigo: %d\n",r);
	printf("Ordenado a = %d; b = %d; c = %d;\n",a,b,c);
	

	system("pause");
	return 0;
}

int maior(int* x, int* y, int *w)
{
	int r=1;

	if((*x==*y)&&(*y==*w))
	{
		return r;
	}

	r=0;

	int array[3],i,j,aux;
	array[0] = *x;
	array[1] = *y;
	array[2] = *w;

	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			if(array[i] > array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				j--;
				
			}
		}
	}

	*x = array[0];
	*y = array[1];
	*w = array[2];
	
	return r;
}