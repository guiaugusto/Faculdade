#include <bits/stdc++.h>

using namespace std;

int main (){

	long long unsigned a, b, c;

	while(cin >> a >> b){

		bitset<33> bita(a);
		bitset<33> bitb(b);

		printf("%llu\n", bita ^ bitb);

	}

	return 0;
}