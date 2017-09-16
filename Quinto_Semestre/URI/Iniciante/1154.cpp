#include <bits/stdc++.h>

using namespace std;

int main (){

	double n;
	int cont = 0;
	double sum = 0;
	double res;

	while(cin >> n, n >= 0){
		sum += n;
		cont++;
	}

	res = sum/cont;

	printf("%.2lf\n", res);

	return 0;
}