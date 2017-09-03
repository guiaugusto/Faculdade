#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b;
	int soma = 0;

	cin >> a >> b;

	int temp;

	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}

	a++;
	b--;

	if(a % 2 == 0)
		a++;

	while(a <= b){
		soma = soma + a;
		a += 2;
	}

	printf("%d\n", soma);

	return 0;
}