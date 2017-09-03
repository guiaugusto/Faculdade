#include <bits/stdc++.h>

using namespace std;

int main (){

	double v;
	double i = 0;
	double resto = 0;

	cin >> v;

	if(v > 2000){
		resto = v - 2000;
		i = i + resto*0.08;
	}

	if(v > 3000){
		resto = v - 3000;
		i = i + resto*0.18;
	}

	if(v > 4500){
		resto = v - 4500;
		i = i + resto*0.28;
	}

	if(i == 0)
		printf("Isento\n");
	else
		printf("R$ %.2lf\n", i);

	return 0;
}