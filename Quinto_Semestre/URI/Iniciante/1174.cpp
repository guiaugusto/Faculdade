#include <bits/stdc++.h>

using namespace std;

int main (){

	double n[100];

	for(int i = 0; i < 100; i++){
		cin >> n[i];

		if(n[i] <= 10){
			printf("A[%d] = %.1lf\n", i, n[i]);
		}
	}

	return 0;
}