#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	double fibo;

	cin >> n;

	fibo = (pow(((1+sqrt(5))/2.0),n)-pow(((1-sqrt(5))/2.0),n))/sqrt(5);

	printf("%.1lf\n", fibo);

	return 0;
}