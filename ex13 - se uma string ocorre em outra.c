#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int occorre(char* str1, char* str2);

int main()
{
	char str1[10],str2[10];
	int r;

	printf("Digite a primeira String:\n");
	scanf("%[^\n]s",str1);

	fflush(stdin);

	printf("Digite a segunda String:\n");
	scanf("%[^\n]s",str2);	

	r = occorre(str1,str2);

	if(r == -1)
	{
		printf("A string nao occorre!:(\n");
	}
	if(r == 0)
	{
		printf("A string B eh maior que a A!:D\n");
	}
	if(r == 1)
	{
		printf("A string B ocorre em A!:)\n");
	}

	system("pause");
	return 0;
}

int occorre(char* str1,char* str2)
{
	int i,j,s,tamStr1,tamStr2,aux,soma=0;

	tamStr1 = strlen(str1);
	tamStr2 = strlen(str2);
	
	if(tamStr2 > tamStr1)
	{
		return 0;
	}

	for(i=0;i<tamStr1;i++)
	{
		s=i;
		for(j=0;aux!=0;j++)
		{
			if(str1[s] == str2[j])
			{
				soma++;
				s++;	
			}
			else if(str1[s] != str2[j])
			{
				aux = 0;
			}
		}
		if(soma == tamStr2)
		{
			return 1;
		}
		aux = 1;
		soma = 0;	
	}		
	return -1;
}