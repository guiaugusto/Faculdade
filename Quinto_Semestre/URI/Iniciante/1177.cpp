#include <bits/stdc++.h>

using namespace std;

int main (){

	int t;
	int n[1001];

	cin >> t;

	int j = 0;

	for(int i = 0; i < 1000; i++){
		printf("N[%d] = %d\n", i, j);

		if(j >= t-1){
			j = 0;
		}else{
			j++;
		}
	}


	return 0;
}