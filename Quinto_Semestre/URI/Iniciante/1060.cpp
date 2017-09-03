#include <bits/stdc++.h>

using namespace std;

int main (){

	double n[6];
	int cont = 0;

	for(int i = 0; i < 6; i++){
		cin >> n[i];
		if(n[i] > 0){
			cont++;
		}
	}

	printf("%d valores positivos\n", cont);

	return 0;
}