#include <bits/stdc++.h>

using namespace std;

int main (){

	int n, inicio;
	int j = 0;

	while(cin >> n, n > 0){

		int a[n+2];

		for(int i = 0; i < n; i++){				
			cin >> a[i];
		}

		a[n] = a[0];
		a[n+1] = a[1];

		for(int i = 1; i <= n; i++){
			if(a[i] < a[i-1] && a[i] < a[i+1]){
				j++;
			}else if(a[i] > a[i-1] && a[i] > a[i+1]){
				j++;
			}
		}

		printf("%d\n", j);
		j = 0;

	}


	return 0;
}
