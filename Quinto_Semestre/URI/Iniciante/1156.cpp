#include <bits/stdc++.h>

using namespace std;

int main (){

	double sum = 0;
	double n = 1;
	int i = 0;
	int j = 1;

	while(n+i != 39){
		sum = sum + (n+i)/(j*1.0);
		i += 2;
		j *= 2;
	}

	printf("%.2lf\n", sum);

	return 0;
}