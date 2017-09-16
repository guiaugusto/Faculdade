#include <bits/stdc++.h>

using namespace std;

int main (){

	int n;
	int m;
	int teste = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> m;

		int h = 1;
		int j = 2;

		while(h <= m){
			h += j;
			j++;
			if(h == m){
				teste = 1;
				break;
			}
		}

		if(teste == 1){
			printf("%d eh perfeito\n", m);
		}else{
			printf("%d nao eh perfeito\n", m);
		}

		teste = 0;
	}

	return 0;
}