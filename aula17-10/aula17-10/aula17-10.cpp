// aula17-10.cpp : Defines the entry point for the console application.
//condicionais
//! negativo,diferente

#include "stdafx.h"

#include <stdlib.h>		

int main()
{
	int a = 5;

	if (true)
	{
		printf("Sempre vai imprimir essa frase\n");
	   //sempre ira imprimir pois o resultado de expressao do if eh true	

	}
	if (false)
	{
		printf("Essa frase nunca sera impressa\n");
     //resultado da expressao eh false,nunca ira utilizar este bloco
	}

	if (a == 3)
	{
		printf("A eh igual a 3 ");
	}
	if (a != 3)
	{
		printf("A eh diferente de 3 ");
	}

	if (a <= 5) // (-10000,0,1,2,3,4,5)
	{
		printf("A eh menor ou igual a 5\n");
	}

	if (a < 5) //(-10000,0,1,2,3,4)
		//if (a==5 && a != 3)
		////if ((a != 5) && ((a % 5 == 0) && (a % 7 == 0 ))) e uma divisao exata ou nao,
	{


	}



    return 0;
}

