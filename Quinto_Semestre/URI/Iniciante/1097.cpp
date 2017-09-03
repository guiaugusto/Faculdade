#include <bits/stdc++.h>

using namespace std;

int main(){

	int n = 1;
	int j = 7;
	int c = 0;

	for(int i = 0; i < 15; i++){
		printf("I=%d J=%d\n", n, j);
		j--;
		c++;
		if(c > 2){
			c = 0;
			j += 5;
			n += 2;
		}
	}


	return 0;
}