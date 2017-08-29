/*
Passo 1: fazer o mmc
Passo 2: mmc multiplicar por n1 e dividir por d1 e
		operando (soma, mult, div, sub)
		 mmc multiplicar por n2 e dividir por d2
Passo 3: mostrar a soma dos novos numeradores e o denominador
Passo 4: simplificar

*/

#include <stdio.h>
#include <stdlib.h>

int mmc_calc(double d1, double d2, double mmc, int cont){

	if((int)d1 % cont == 0 && (int)d2 % cont == 0)
		mmc_calc(d1/cont, d2/cont, mmc*cont, cont++);
	else if((int)d1 % cont != 0 && (int)d2 % cont == 0)
		mmc_calc(d1, d2/cont, mmc*cont, cont++);
	else if((int)d1 % cont == 0 && (int)d2 % cont != 0)
		mmc_calc(d1/cont, d2, mmc*cont, cont++);	
	else if((int)d1 == 1 && (int)d2 == 1)
		return (int) mmc;
	else
		return mmc_calc(d1, d2, mmc, cont++);

}

int main (){

	printf("Resultado: %d\n", mmc_calc(3, 4, 1, 2));



	return 0;
}