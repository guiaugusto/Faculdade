#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	while(cin >> n){

		int l[n];
		int maior = 0;

		for(int i = 0; i < n; i++){
			cin >> l[i];
			if(l[i] > maior){
				maior = l[i];
			}
		}

		if(maior < 10){
			printf("1\n");
		}else if(maior >= 10 && maior < 20){
			printf("2\n");
		}else{
			printf("3\n");
		}

	}

	return 0;
}