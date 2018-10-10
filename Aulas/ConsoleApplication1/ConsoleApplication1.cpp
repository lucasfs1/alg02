// Aula08/10/2018.cpp : Defines the entry point for the console application.
//comentarios
/*
comentario longo 
(mais de uma linha)

*/

#include "stdafx.h"     // incluso de biblioteca
                       //C ansi
#include <stdio.h>    // padrao de entrada e saida
#include <stdlib.h>  //biblioteca padrao onde tem comandos

//variaveis
int a; //inteiro
float b; //real(ponto flutuante)
double c; //real(maior precisao)
bool d; //booleano (verdadeiro/falso) (true/false)

//compliar:ctrl+shift+b
//n=pular l.
//t=espaço

int main() // ponto de inicio f5 executa
{
     //variavel local	
	//()visivel somente nesta funcao,a partir dessa linha)

	int e;
   

	printf("Hello world!\n");

	//como imprimri valores
	printf("\n");
	printf("%i", 99 );
		printf("\n");
		printf("%f\n",100.01);

//texto (string) e valores juntos
		printf("Aqui vai o valor %i,total da soma.\n", 98 + 10);

		printf("%i + %i = %i\n", 500, 600, 500 + 600);

		//////////////////////////////////////////////////////////////////

		a = 150;
		e = 270;

		int f = a + e;
		printf("o resultado da soma eh:%i\n", f);

		////////////////////////////////////////////////////////////////////
  
		//leitura SCANF / SCANF_S

		scanf_s("%i", &f);

		printf("\nVoce digitou %i\n", f); // verificacao

///////////////////////////////////////////////////////////////////////////////
		printf("Digite um valor real(float):");

		scanf_s("%f", &b);

		printf("\nVoce digitou %f\n", b);




		system("pause");


	return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//void identifica o  retorno 