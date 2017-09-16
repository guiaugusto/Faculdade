#include <bits/stdc++.h>

using namespace std;

int main (){

	int a;

	while(cin >> a, a > 0){
		
		long long int cont = 0;

		for(int i = a; i >= 1; i--){
			cont += i * i;
		}

		printf("%lld\n", cont);

	}

	return 0;
}