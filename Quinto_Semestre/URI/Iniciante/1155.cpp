#include <bits/stdc++.h>

using namespace std;

int main (){

	double n;
	double sum = 1;

	for(int i = 2; i <= 100; i++){
		n = i;
		sum += 1/n;
	}

	printf("%.2lf\n", sum);

	return 0;
}