#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int res = 1;

	cin >> n;

	for(int i = 1; i <= n; i++){
		res *= i;
	}

	printf("%d\n", res);

	return 0;
}