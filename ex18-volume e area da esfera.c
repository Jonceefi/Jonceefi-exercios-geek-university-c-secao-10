#include<stdio.h>
#include<stdlib.h>

void calc_esfera(float r, float *area, float *volume);

int main()
{
	float r;
	float *volume,*area;

	printf("Digite o raio da circunferencia: ");
	scanf("%f",&r);

	calc_esfera(r,area,volume);

	system("pause");
	return 0;
}

void calc_esfera(float r, float *area, float *volume)
{

	float a,v;
	a = 4*3.14*r*r;
	v = 1.33*3.14*r*r*r;
	area = &a;
	volume = &v;

	printf("area tem valor aproximado de: %.2f\n",*area);
	printf("volume tem valor aproximado de: %.2f\n",*volume);

}
