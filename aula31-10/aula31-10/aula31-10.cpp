// aula31-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*

exercicio 1
int main()
{
	float xa, xb, ya, yb;
	float resultado;

	printf("Digite um valor par xb:");
	scanf_s("%f", &xb);

	printf("Digite um valor par xa:");
	scanf_s("%f", &xa);

	printf("Digite um valor par yb:");
	scanf_s("%f", &yb);
	
	printf("Digite um valor par ya:");
	scanf_s("%f", &ya);

	
  resultado = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
  printf("Resultado final:%.2f\n", resultado);

	system("pause");
	return 0;

}

*/
/*
exercicio 2
int main()
{
	int D, R, S;
	int A, B, C;

	printf("Digite um valor para A:");
	scanf_s("%i", &A);
	printf("Digite um valor para B:");
	scanf_s("%i", &B);
	printf("Digite um valor para C:");
	scanf_s("%i", &C);

	R = (pow((A + B), 2));
	S = (pow((B + C), 2));
	D = (R + S) / 2;
	printf("Resultado final:%i\n",D);

	system("pause");
	return 0;
}
*/
/*
exercicio 3
int main()
{
	int dias, ano, meses;
	printf("Digite sua idade em dias:");
	scanf_s("%i", &dias);
		meses = dias / 30;
		ano = dias / 365;
		meses = meses % 12; //%resto da divisao
		dias = dias % 30;
		printf("Voce tem %i", ano);
	    printf("anos\n%i", meses);
	    printf("meses\n %i", dias);
	    printf("dias.\n");





	system("pause");
	return 0;
}
*/
/*
exercicio 4
int main()
{
	float nota1, nota2, nota3;
	float media;

	printf("Digite sua primeira nota:");
	scanf_s("%f", &nota1);
	printf("Digite sua segunda nota:");
	scanf_s("%f", &nota2);
	printf("Digite sua tercerira nota:");
	scanf_s("%f", &nota3);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (10);

		printf("Sua nota final:%.2f", media);

	system("pause");
	return 0;
}
*/
/*
exercicio 5
float ValorCarro()
{
	float valor;
	printf("Digite o valor do carro:\n");
	scanf_s("%f", &valor);
	return valor;
}

float custo(float valor)
{
	float vFabrica = valor;
	float distribuidora = vFabrica * 0.28;
	float impostos = vFabrica * 0.45;
	float total = distribuidora + vFabrica + impostos;
	return total;
}

int main()
{
	float valor;
	valor = ValorCarro();
	printf("O valor total do carro e:%.0freais\n", custo(valor));


	system("pause");
	return 0;
}
*/
/*
exercicio 6
void NumeroInteiro()
{
	int Inteiro;
	printf("Digite um numero inteiro:");
	scanf_s("%i", &Inteiro);
	int soma = 0;
		for (int i = 0; i <= Inteiro; i++) {
			soma += i;
		}
		printf("O resultado e :%i\n", soma);
		
}



int main()
{
	NumeroInteiro();

	system("pause");
	return 0;
}
*/