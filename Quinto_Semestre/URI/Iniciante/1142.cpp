#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int c = 1;
	cin >> n;

	for(int i = 0; i < n; i++){
		printf("%d %d %d PUM\n", c, c+1, c+2);
		c += 4;
	}


	return 0;
}