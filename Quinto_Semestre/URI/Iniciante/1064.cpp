#include <bits/stdc++.h>

using namespace std;

int main (){

	double n[6];
	int cont = 0;
	double soma = 0;
	double media;

	for(int i = 0; i < 6; i++){
		cin >> n[i];
		if(n[i] > 0){
			cont++;
			soma += n[i];
		}
	}

	media = soma/cont;

	printf("%d valores positivos\n", cont);
	printf("%.1lf\n", media);

	return 0;
}