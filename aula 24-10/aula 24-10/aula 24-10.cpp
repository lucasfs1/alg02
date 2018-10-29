// aula 24-10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

/*
float calculo(float salario, float aliquota, float deduçao)
{

	return (salario * aliquota) - deduçao;
}



void ApresentaIR()
{
	float salario = 0;
	printf("Digiti numero real com ponto:");
	scanf_s("%f", &salario);


	float imposto = 0;

		if (salario <= 1903.98)
		{
			printf("isento\n");
		}
		else  if (salario <= 2826.65)
		{
			imposto = calculo(salario , 0.075, 142.8);
			printf("A aliquota aplicada foi : 7.5%%\ndeducao:142.80\nimposto devido:%.2f\n", imposto);
		}
		else  if (salario <= 3715.05)
		{
			imposto = calculo(salario ,0.15, 354.8);
			printf("A aliquota aplicada foi : 1.5%%\ndeducao:354.80\nimposto devido:%.2f\n", imposto);
		}
		else  if (salario <= 4664.68)
		{
			imposto = calculo (salario, 0.225, 636.13);
			printf("A aliquota aplicada foi : 22.5%%\ndeducao:636.13\nimposto devido:%.2f\n", imposto);
		}
		else
		{
			imposto = calculo(salario , 0.275, 869.36);
			printf("A aliquota aplicada foi : 27.5%%\ndeducao:869.36\nimposto devido:\n%.2f\n", imposto);
		}

}

int main()
{
	
	ApresentaIR();


	system("pause");
	return 0;

}
*/

/*
int main()
{
	/* loop infinito
	while(true)
	{
	printf("aaa\n");
	
	}*/
	
		/*
	int a = 0;
		while (a < 5)
		{ // inicio do escopo while
			printf("%i\t", a);

				a++; //a = a + 1 ;
			
		}// fim do escopo while
		a = 0;
		printf("\n");
	printf("\n_______________________________________________________________________________\n");
	printf("\n");
	while (a <= 5)
	{ // inicio do escopo while
		printf("%i\t", a);

			a++; //a = a + 1 ;

	}// fim do escopo while
	printf("\n");
	printf("\n________________________Do While_______________________________________________________\n");
	printf("\n");
	do
	{
		printf("%i\t", a);

	} while (a <= 5);
	*/
	
int numeroInteiro()
{
	int variavel;
	printf("Favor digitar um valor inteiro:\n");
	scanf_s("%i", &variavel);
	return variavel;

}

int main()
{
	 int variavelum = numeroInteiro();
	 int variaveldois = numeroInteiro();
	 do
	 {
		 variavelum++;
		 printf("numero:%i\n", variavelum);
	 } while (variavelum < variaveldois );

	system("pause");
	return 0;


}
