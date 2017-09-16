#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	cin >> n;

	char o;

	cin >> o;

	double soma = 0;
	double mat[12][12];

	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> mat[i][j];
			if(i == n){
				soma += mat[i][j];
			}
		}
	}

	if(o == 'S'){
		printf("%.1lf\n", soma);
	}else{
		printf("%.1lf\n", soma/12);
	}

	return 0;
}