#include <bits/stdc++.h>

using namespace std;

int main (){

	int T, j = 0;
	
	int N;

	while(scanf("%d", &T), T > 0){	

		for(int i = 0; i < T; i++){
			cin >> N;

			if(N % 2 == 1){
				N = N-1;
				N = N*2;
				N = N+1;
			}else{
				N = N-2;
				N = N*2;
				N = N+2;
			}

		printf("%d\n", N);
		
		}
	}			

	return 0;
}