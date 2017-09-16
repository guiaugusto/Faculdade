#include <bits/stdc++.h>

using namespace std;

int main (){

	int t;

	cin >> t;

	int n[t];

	long long unsigned fib[61];
	long long unsigned ultimo;
	long long unsigned penultimo;

	int j;

	for(j = 0; j < t; j++){
		cin >> n[j];
	}

	for(int i = 0; i <= 60; i++){
		if(i == 0){
			fib[i] = 0;
			penultimo = 0;
		}else if(i == 1){
			fib[i] = 1;
			ultimo = 1;
		}else{	
			fib[i] = ultimo + penultimo;
			penultimo = ultimo;
			ultimo = fib[i];
		}
	}

	for(int i = 0; i < j; i++){
		printf("Fib(%d) = %llu\n", n[i], fib[n[i]]);
	}

	return 0;
}