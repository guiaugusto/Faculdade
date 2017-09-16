#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	while(cin >> n, n != 0){

		if(abs(n) % 2 == 1){
			n++;
		}

		printf("%d\n", n+n+2+n+4+n+6+n+8);
	}

	return 0;
}