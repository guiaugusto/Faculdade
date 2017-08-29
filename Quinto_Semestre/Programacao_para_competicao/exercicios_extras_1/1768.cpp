#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int altura = 2;
	int ponto = 1;
	int teste = 0;

	while(cin >> n){

		while(ponto != n){
			altura++;
			ponto += 2;
		}

		int v[altura][n];

		for(int i = 0; i < altura+1; i++){
			for(int j = 0; j < n; j++){
				if(j == (n/2) || i == altura-2 
					|| j >= (n/2)-i && j <= (n/2) &&  i < altura-2 
					|| j <= (n/2)+i && j >= (n/2) && i < altura-2
					|| i == altura && j >= (n/2)-1 && j <= (n/2)
					|| i == altura && j <= (n/2)+1 && j >= (n/2)){
					printf("*");
					teste = 1;
				}else{

					if(teste == 1){
						j = n;
						teste = 0;
					}else{
						printf(" ");
					}
				}
			}
			teste = 0;
			printf("\n");
		}

		altura = 2;
		ponto = 1;

		printf("\n");

	}

	return 0;
}