#include <bits/stdc++.h>

using namespace std;

int main(){

	int n = 60;
	int p = 1;

	for(int i = 0; i < 38; i++){
		if(i == p){
			printf("I=%d J=%d\n", i, n);
			n -= 5;
			p += 3;
		}
	}


	return 0;
}