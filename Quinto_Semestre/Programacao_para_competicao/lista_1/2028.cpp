#include <bits/stdc++.h>

using namespace std;

int h = 1;

int fatorial(int n){
	if(n == 1)
		return 1;
	else
		return n + fatorial(n-1);
}

int main (){

	int n, m, k;

	while(cin >> n){

		m = n;

		if(n != 0)
			k = fatorial(n) + 1;
		else
			k = 1;

		if(k == 1)
			printf("Caso %d: %d numero\n", h, k);
		else
			printf("Caso %d: %d numeros\n", h, k);

		h++;

		printf("%d", 0);

		for(int i = 1; i <= n; i++){
			for(int j = 0; j <= n-m; j++){
				printf(" %d", i);
			}
			m--;
		}

		printf("\n\n");

	}

	return 0;
}