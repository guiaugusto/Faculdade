#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int f;

	int ultimo;
	int penultimo;

	cin >> n;

	printf("0");

	for(int i = 1; i < n; i++){

		if(i == 1){
			ultimo = 1;
			penultimo = 0;
			f = ultimo;
		}else{
			f = ultimo + penultimo;
			penultimo = ultimo;
			ultimo = f;
		}

		printf(" %d", f);
	}	

	printf("\n");

	return 0;
}