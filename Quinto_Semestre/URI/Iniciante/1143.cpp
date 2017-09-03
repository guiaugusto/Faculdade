#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		printf("%.0lf %.0lf %.0lf\n", (i*1.0)+1, pow((i*1.0)+1, 2), pow((i*1.0)+1, 3));
	}


	return 0;
}