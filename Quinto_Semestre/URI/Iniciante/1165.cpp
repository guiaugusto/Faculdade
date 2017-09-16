#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		int m;
		int teste = 0;

		cin >> m;

		for(int j = 1; j <= m; j++){
			if(m % j == 0){
				teste++;
			}
		}

		if(teste > 2){
			printf("%d nao eh primo\n", m);
		}else{
			printf("%d eh primo\n", m);
		}

		teste = 0;

	}

	return 0;
}