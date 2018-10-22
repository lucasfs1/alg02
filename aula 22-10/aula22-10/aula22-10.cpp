// aula22-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
void ParOuImpar(int a)
{
	if ((a % 2 == 0)) //a%2 resto da divisao por 2 
	{
		printf("Par\n");
	}
	else
	{
		printf("Impar\n");
	}
}

int main()
{
    return 0;
}

