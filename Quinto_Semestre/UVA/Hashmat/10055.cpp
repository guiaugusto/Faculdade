#include <bits/stdc++.h>

using namespace std;

int main (){

	double a, b;

	while(cin >> a >> b){

		double res;

		res = a - b;

		printf("%.0lf\n", abs(res));
	}

	return 0;
}