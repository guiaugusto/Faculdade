#include <bits/stdc++.h>

using namespace std;

int main (){

	int n[20];

	for(int i = 20-1; i >= 0; i--){
		cin >> n[i];
	}

	for(int i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, n[i]);
	}

	return 0;
}