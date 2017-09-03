#include <bits/stdc++.h>

using namespace std;

int main (){

	int soma = 0;
	int a, b, temp;

	while(cin >> a >> b, a > 0 && b > 0){

		if(a > b){
			temp = b;
			b = a;
			a = temp;
		}

		for(int i = a; i <= b; i++){
			printf("%d ", i);
			soma += i;
		}	
		printf("Sum=%d\n", soma);
		soma = 0;
	}

	return 0;
}