#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	cin >> n;

	double a[n], b[n], c[n];

	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i] >> c[i];
	}

	for(int i = 0; i < n; i++){
		printf("%.1lf\n", (a[i]*2+b[i]*3+c[i]*5)/10);
	}

	return 0;
}