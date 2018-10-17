// Aula1010_CalculadoraSimples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdlib.h>


int   mais (int    a, int     b)
{
	int    c;
	c = a + b;
	return c;
}
int     menos (int    a, int    b)
{
	int  c;
	c = a - b;
	return c;
}
int     vezes(int    a, int    b)
{
	int    c;
	c = a * b;
	return c;
}
int   dividir(int    a, int    b)
{
	int    c;
	c = a / b;
	return c;
}
int   LerValorInteiro()
{
	int  variavel;
	printf("\nFavor digitar um numero:");
	scanf_s("%i", &variavel);
	return variavel;
}

int  main()
{
	int  primeirovalor = LerValorInteiro();
	int  segundovalor = LerValorInteiro();

	int  resultado = mais(primeirovalor, segundovalor);
	printf("\nResultado:%i", resultado);

	 resultado = menos(primeirovalor, segundovalor);
	printf("\nResultado:%i", resultado);

 resultado = vezes(primeirovalor, segundovalor);
	printf("\nResultado:%i", resultado);

 resultado = dividir(primeirovalor, segundovalor);
	printf("\nResultado:%i\n", resultado);
	system("pause");

	return 0;
}