// aula 10-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
void HelloWorld()
{
	printf("Hello Word!\n");
} 

int Soma2Valores(int a, int b)
{

	int c;
	c = a + b;
	return c;
}

int main()
{
	HelloWorld();
	int d = Soma2Valores(99, 1);
	printf("\tResultado: %i\n", d);





		system("pause");
    return 0;
}
























//Debug acompanha a execuçao passo a passo
//f5-executa debug
//F9-break points
//f10-executa sem mostrar(passo a passo)
//f11-executa passo a passo 
//void identifica o  retorno e nao tem retorno
//soma de 2 valores (int a,int b)
//int c 
//c=a+b
// return c
//usa-se (soma de 2 valores (3,7) ) para chamar a funçao
//pode-se usar tambem (return a + b )
//ex:int d =soma de 2 valores (3,7)
//funçoes devem ser escritas antes do (main)
//