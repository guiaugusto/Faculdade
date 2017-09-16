#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int menor = 0;

	cin >> n;

	int vec;
	int pos = 0;

	for(int i = 0; i < n; i++){
		cin >> vec;
		if(i == 0){
			menor = vec;
		}else{
			if(vec < menor){
				menor = vec;
				pos = i;
			}
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);

	return 0;
}