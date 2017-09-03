#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b, temp;

	cin >> a >> b;

	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}

	int soma = 0;

	for(int i = a; i <= b; i++){
		if(i % 13 != 0){
			soma += i;
		}
	}

	printf("%d\n", soma);


	return 0;
}