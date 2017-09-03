#include <bits/stdc++.h>

using namespace std;

int main (){

	int a = 0, g = 0, d = 0;
	int o = 0;

	while(o != 4){
		cin >> o;

		switch(o){
			case 1: a++; break;
			case 2: g++; break;
			case 3: d++; break;
		}

	}

	printf("MUITO OBRIGADO\n");

	printf("Alcool: %d\n", a);
	printf("Gasolina: %d\n", g);
	printf("Diesel: %d\n", d);


	return 0;
}