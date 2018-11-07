// aula 07-11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#define MAX 20

/*
void repeticao();
float soma(float, float);

int main()
{
	float c;
	c = soma(3, 2);
	repeticao();
    return 0;
}

void repeticao()
{
	int i;
	for (i = 0; i < 10; i++)
		printf("oi");
}

float soma(float a, float b)
{

	return a + b;
}
*/
/*
void exercicio19();
int main()
{
	exercicio19();

	system("pause");
	return 0;
}
void exercicio19()
{
	int mat[2][3], i, j, l, f,c, resl[3], rescl[2];
	printf("Informe todos os valores  para matriz:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Linha:  %i, Coluna:  %i : " , i, j);
			scanf_s("%i", &mat[i][j]);
		}
	}
	printf("Qual line vc quer multiplicar ?");
	scanf_s("%i,",&l);
	printf("Qual vai ser o fator multiplicador?");
	scanf_s("%i,",&f);
	for (i = 0; i < 3; i++)
	resl[i] = mat[l][i] * f;
	printf("os valores resultantes foram:");
	for (i = 0; i < 3; i++)
	printf("%i ", resl[i]);
	printf("\n");
	printf("Qual coluna vc quer multiplicar ?");
	scanf_s("%i, ", &c);
	printf("Qual vai ser o fator multiplicador?");
	scanf_s("%i ", &f);
	for (i = 0; i < 2; i++)
	rescl[i] = mat[c][i] * f;
	printf("os valores resultantes foram:");
	for (i = 0; i < 2; i++)
	printf("%i ", rescl[i]);
	printf("\n");
}
*/
void exercicio16();
int main()
{

	exercicio16();


	system("pause");
	return 0;
}
int poschar(char v[MAX],char c)
{
	int i;
	for (i = 0; i < MAX && v[i] != '\0' && v[i] != c; i++);
	if (i == MAX || v[i] == '\0')
		return -1;
	else
		return i;


}
void exercicio16()
{
	char v[MAX], c;
	int p;
	printf("informe a frase: ");
	gets_s(v);
	printf("informe o caractere  a ser localizada:");
	scanf_s("%c", &c);
	p = poschar(v, c);
	if (p == -1)
		printf("Nao encotrado!");
	else
		printf("Encontrado na posicao: %i", p);


 }





















































