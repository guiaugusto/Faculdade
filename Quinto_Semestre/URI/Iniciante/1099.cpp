#include <bits/stdc++.h>

using namespace std;

int main (){

	int a, b;
	int soma = 0;
	int n;

	cin >> n;

	for(int i = 0; i < n; i++){

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
	soma=0;
	}

	return 0;
}