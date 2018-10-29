// aula29-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
/*
int numeroInteiro()
{
	int numero;
	printf("Favor digitar um valor inteiro:\n");
	scanf_s("%i", &numero);
	return numero;

}
int main()
{
	
	int numeroUm = numeroInteiro();
	int numerodois = numeroInteiro();

	do
	{
		numeroUm++;
		printf("numero:%i\n", numeroUm);


	} 
	while (numeroUm < numeroR);//caso ponho um sinal de - ele diminiu um numero

	else
	{
		int valorR = numeroR+1
			while (numeroum > valorR)
			{

			}
	}
	system("pause");
	return 0;

}
*/
/*
Funçao pra par ou impar precisa arrumar algumas coisas dae da certo
int main(void)
{
	int num;
	printf("digite um numero inteiro: ");
	scanf_s("\n%d", &num);
	if (num % 2 == 0)//operador %
	{
		printf("Par");
	}
	else
		printf("Ímpar");

	system("pause");
	return 0;
}
*/

//se e crescente ou decrescente facil
int valorInteiro()
{
	int numero;
	printf("Favor digitar um valor inteiro:\n");
	scanf_s("%i", &numero);
	return numero;
}
///////////////////////////////////////////////////////////////////////////////
void informarValor()
{
	int n1, n2, n3, n4, n5, numero;
	int i = 0;//iterator,index(vetores)

	while (i < 5)
	{
		numero = valorInteiro();
		if (i == 0)
		{
			n1 = numero;
		}
		else if (i == 1)
		{
			n2 = numero;
		}
		else if (i == 2)
		{
			n3 = numero;
		}
		else if (i == 3)
		{
			n4 = numero;
		}
		else if (i == 4)
		{
			n5 = numero;
		}


		i++;
	}


	if ((n1 < n2) && (n2 < n3) && (n3 < n4) && (n4 < n5))
	{
		printf("os valores estavam em ordem crescente\n");
	}
	else
	{
		printf("os valores nao estavam em ordem crescente\n");
	}
}
//////////////////////////////////////////////////////////////////////////////
void InformarValoresEmOrdem2()
{
	int numero = 0, anterior = 0;
	int crescente = 1, i = 0;
	while (i < 5)
	{
		numero = valorInteiro();

		if (i != 0)
		
		{
			if (anterior > numero)
			{
				crescente = 0;
			}
		}
		 
		anterior = numero;
		i++;
	}

	if (crescente == 1)
	{
		printf("os valores estavam em ordem crescente\n");
	}
	else
	{
		printf("os valores nao estavam em ordem crescente\n");
	}
}
/////////////////////////////////////////////////////////////////////////////
int main()
{
	//informarValor();
	//InformarValoresEmOrdem2();


	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////
/*
* valor inicial 
*condiçoes  de parada
*incremento / decremento
*/
///////////////////////////////////////////////////////////////////////////
//terefa de casa:saber se a funçao  e sequencial ou nao.

/*
VETORES
&vet[i]
termina em (tamanho - 1)
exemplo 
vet[i]

*/
