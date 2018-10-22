// aula 22-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>

int MaiorValor(int a, int b, int c, int d)
{
	int maior = a;

	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d)
	{
		maior = d;
	}
	return maior;
}
int ValoresInteiros()
{
	int variavel = 0 ;
	printf("Favor digitar um valor inteiro:\n");
		scanf_s("%i",&variavel);
	return variavel;
}

float LerValor()
{
	float valor = 0;
	printf("Digiti numero real com ponto:");
		scanf_s("%f", &valor);
	return valor;
}
float MediaValores(float a, float b, float c, float d)
{
	float soma = a + b + c + d ;
	float media = soma / 4;
	return media;
	//return(a + b + c + d) / 4;
}

void ImprimiValores(float a, float b, float c, float d)
{
	float media = MediaValores(a, b, c, d);
	printf("\nO valor da media eh:%.1f\n", media);

	if (a > media)
	{
		printf("%.1f", a);
	}
	///////////////////
	if (b > media)
	{
		printf("%.1f", b);
	}
	/////////////////
	if (c > media)
	{
		printf("%.1f", c);
	}
	/////////////////
	if (d > media)
	{
		printf("%.1f", d);
	}
    /////////////////

}


int main()

{
	int variavelum = ValoresInteiros();
	int variaveldois = ValoresInteiros();
	int variaveltres = ValoresInteiros();
	int variavelquatro = ValoresInteiros();
	int m = MaiorValor(variavelum, variaveldois, variaveltres, variavelquatro);

	printf("\nO maior valor encontrado foi: \t\n%i\n", m);

	float variavelumReal = LerValor();
	float variaveldoisReal = LerValor();
	float variaveltresReal = LerValor();
	float variavelquatroReal = LerValor();

	ImprimiValores(variavelumReal, variaveldoisReal, variaveltresReal, variavelquatroReal);
	printf("\n\n");


	system("pause");
    return 0;

}

