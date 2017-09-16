#include <bits/stdc++.h>

using namespace std;

int main (){

	char o;

	cin >> o;

	double soma = 0;
	double mat[12][12];

	int i, j;

	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			cin >> mat[i][j];
			if(j > i){
				soma += mat[i][j];
			}
		}
	}

	if(o == 'S'){
		printf("%.1lf\n", soma);
	}else{
		printf("%.1lf\n", soma/66);
	}

	return 0;
}