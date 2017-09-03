#include <bits/stdc++.h>

using namespace std;

int main (){

	int q = 0;
	double n;
	double soma = 0;

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

	return 0;
}