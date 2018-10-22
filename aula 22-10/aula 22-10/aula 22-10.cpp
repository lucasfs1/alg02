// aula 22-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

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


int main()
{
	int variavelum = ValoresInteiros();
	int variaveldois = ValoresInteiros();
	int variaveltres = ValoresInteiros();
	int variavelquatro = ValoresInteiros();
	int m = MaiorValor(variavelum, variaveldois, variaveltres, variavelquatro);

	printf("\nO maior valor encontrado foi: \t%i\n", m);



	system("pause");
    return 0;

}

