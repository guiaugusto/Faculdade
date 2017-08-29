#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	while(scanf("%d", &n) != EOF){

		int vet[n][n];

		int dist = (n/2)-(n/3);

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(i <= (n/2)+dist && i >= (n/3) && j <= (n/2)+dist && j >= (n/3)){
					vet[i][j] = 1;
				}else if(i == j && i != (n/2)){
					vet[i][j] = 2;
				}else if(i + j == n-1 && j != (n/2)){
					vet[i][j] = 3;
				}else if(i == (n/2) && j == (n/2)){
					vet[i][j] = 4;
				}else{
					vet[i][j] = 0;
				}
				if(i == (n/2) && j == (n/2)){
					vet[i][j] = 4;
				}
			}
		}

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << vet[i][j];
			}
			cout << endl;
		}

		printf("\n");
	}

	return 0;
}