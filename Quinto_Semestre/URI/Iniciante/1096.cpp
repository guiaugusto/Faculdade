#include <bits/stdc++.h>

using namespace std;

int main(){

	int n = 1;
	int j = 7;

	for(int i = 0; i < 15; i++){
		printf("I=%d J=%d\n", n, j);
		j--;
		if(j < 5){
			j = 7;
			n += 2;
		}
	}


	return 0;
}