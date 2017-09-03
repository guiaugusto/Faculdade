#include <bits/stdc++.h>

using namespace std;

int main (){

	int q = 0;
	double n;
	double soma = 0;
	int o = 0;

	while(o != 2){
		while(q != 2){
			cin >> n;

			if(n <= 10 && n >= 0){
				soma += n;
				q++;
			}else{
				printf("nota invalida\n");
			}
		}

		if(q == 2){
			printf("media = %.2lf\n", soma/2);
		}

		soma = 0;
		q = 0;

		do{
			printf("novo calculo (1-sim 2-nao)\n");
		}while(cin >> o, o != 1 && o != 2);

	}

	return 0;
}