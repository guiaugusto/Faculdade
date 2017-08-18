/*********************************************************************************
*																				 *
* Observações a serem feitas pelo código original:								 *
*																				 *
* - Sem identação																 *
* - Não possui documentação														 *
* - Não está auto-explicativo													 *
*																				 *
*																				 *
* Ordem das técnicas de programação aplicadas neste exercício:					 *
*																				 *
* Programação defensiva:														 *
* 	- Estilo e Design															 *
*																				 *
*																				 *
*********************************************************************************/

/*********************************************************************************
* Arquivo: prova1-2017-2.c 												 		 *
* Objetivo: Encontrar numeros primos usando o algoritmo do Crive de Erastotenes. *
*********************************************************************************/

#include <stdio.h>
#define MAX 101

int main(){

	int numero[MAX];

	/* Essas variáveis são usadas para ajudar alguns blocos de código a realizarem seus objetivos. */

	int contador;
	int iterador;

	/* Este bloco de código permite que se possa inicializar todo o vetor numero. */

	for(contador = 0;contador < MAX; ++contador){
		numero[contador] = 0;
	}

	/* Essas varíáveis são inicializadas anteriormente, pois elas não 
	encaixariam ao algoritimo definido, já que não são primos por definição. */

	numero[0] = 1;
	numero[1] = 1;

	/* Este bloco de codigo tem como objetivo percorrer todo o array de numeros a fim de encontrar algum número primo. */

	for(contador = 2; contador < MAX/2; ++contador){
		if(!numero[contador]){

			/* Esta estrutura de repetição tem como objetivo eliminar todos os números
			 	multiplos do numero primo analisado dentro do intervalo definido, inicializando com 1. */
			for(iterador = contador*2;iterador < MAX; iterador += contador){
				numero[iterador] = 1;
			}
		}
	}

	for(contador = 0; contador < MAX; ++contador){
	
		/* Percorrendo todo o array de inteiros, ao encontrar algum numero que foi definido
		 pelo algoritmo como sendo primo, é impresso na tela de forma sequencial. */
		if(!numero[contador]){
			printf("%d ", contador);
		}
	}

	printf("\n");

	return 0;
}