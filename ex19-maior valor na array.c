#include<stdio.h>
#include<stdlib.h>

void maior_valor(int array[0],int p);

int main()
{
	int tam,p;
	printf("Quantos numeros deseja digitar?");
	scanf("%d",&tam);

	int array[tam];

	for(p=0;p<tam;p++)
	{	
		printf("Digite o valor o %d valor",p+1);
		scanf("%d",&array[p]);
	}

	maior_valor(array,p);


	system("pause");
	return 0;
}

void maior_valor(int array[0],int p)
{
	int i,j,maior,x;
	
	/*num_maior guarda o primiero valor existente no vetor,
	dessa forma a variável é iniciada e não ocasionará erros,
	se, por exemplo iniciásemos a mesma com 0, se o usúário
	digitasse apenas números negativos, o retorno seria 0.
	*/
	maior = array[0];
	/*Inicia a leitura do vetor*/
	for(i=0;i<p;i++)
	{	
		/*Verifica do 1º ao ultimo número qual o maior*/
		for(j=0;j<=i;j++)
		{
			if(maior < array[j])
			{
				maior = array[i];
			}
		}
	}
	/*Após a verificação de qual o maior número do vetor, verifica-se quantas vezes ele apaerece.*/
	x = 0;
	for(i=0;i<p;i++)
	{
		if(array[i] == maior)
		{
			x++;
		}
	}
	printf("O maior numero eh %d e aparece %d vez(es) na matriz \n",maior,x);
}