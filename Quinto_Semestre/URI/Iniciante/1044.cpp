#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b;

	cin >> a >> b;

	int teste = 0;

	if(a > b){

		while(b <= a){
			b += b;
		}

		if(a == b)
			teste = 1;

	}else{

		while(a <= b){
			a += a;
		}

		if(b == a)
			teste = 1;

	}


	if(teste == 1){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}

	return 0;
}