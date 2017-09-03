#include <bits/stdc++.h>

using namespace std;

int main (){

	int n[5];
	int cpar = 0;
	int cimp = 0;
	int cpos = 0;
	int cneg = 0;

	for(int i = 0; i < 5; i++){
		cin >> n[i];
		if(n[i] % 2 == 0){
			cpar++;
		}else{
			cimp++;
		}

		if(n[i] > 0){
			cpos++;
		}else if(n[i] < 0){
			cneg++;
		}
	}

	printf("%d valor(es) par(es)\n", cpar);
	printf("%d valor(es) impar(es)\n", cimp);
	printf("%d valor(es) positivo(s)\n", cpos);
	printf("%d valor(es) negativo(s)\n", cneg);

	return 0;
}