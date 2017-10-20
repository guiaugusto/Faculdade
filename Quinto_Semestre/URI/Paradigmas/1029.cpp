#include <bits/stdc++.h>

using namespace std;

int fibon(int x, int *calls){
	*calls += 1;

	if(x == 0){
		return 0;
	}else if(x == 1){
		return 1;
	}else{
		return fibon(x-1, calls) + fibon(x-2, calls);
	}
}

int main (){

	int n;
	cin >> n;
	int fib[39];

	for(int i = 0; i < n; i++){
		int X;
		cin >> X;

		int calls = -1;

		int res = fibon(X, &calls);

		printf("fib(%d) = %d calls = %d\n", X, calls, res);
	}

	return 0;
}
