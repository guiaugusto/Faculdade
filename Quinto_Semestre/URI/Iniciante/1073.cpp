#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	long long int res;

	cin >> n;

	for(int i = 2; i <= n; i += 2){
		res = pow(i, 2);
		printf("%d^2 = %lld\n", i, res);
	}



	return 0;
}